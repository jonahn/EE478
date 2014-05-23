//
//  ViewController.m
//  Bridg
//
//  Created by Ahmed Jafri on 5/6/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#import "ViewController.h"
#import <AudioToolbox/AudioToolbox.h> // for the core audio constants
#import <CoreMedia/CoreMedia.h>
#import <Accelerate/Accelerate.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

#include "settings.h"
#include "Utils.h"

#include "lame.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define PORT_NUMBER 2000
#define SERVER_ADDRESS "10.0.0.1"

@interface ViewController ()
{
    float trackLengthinSeconds;
    FILE *fp;
    short *songWaveL, *songWaveR;
    __block long totalSize;
    unsigned char * mp3Buffer;
}

@end

@implementation ViewController
{
    MPMediaPickerController *pickerController;
}

@synthesize conversionProgress;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    songWaveL = (short *)malloc(BUFFER_SIZE * sizeof(short) );
    songWaveR = (short *)malloc(BUFFER_SIZE * sizeof(short) );
    
    mp3Buffer = (unsigned char*)malloc(BUFFER_SIZE);
    
    pickerController =	[[MPMediaPickerController alloc] initWithMediaTypes: MPMediaTypeMusic];
    pickerController.prompt = @"Choose song to export";
	pickerController.allowsPickingMultipleItems = NO;
    if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")) {
        pickerController.showsCloudItems = YES;
    }
	pickerController.delegate = self;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

void error(const char *msg)
{
    perror(msg);
}

-(IBAction)pickSong:(id)sender
{
    [self presentViewController:pickerController animated:YES completion:nil];
}

- (void)mediaPicker: (MPMediaPickerController *)mediaPicker
  didPickMediaItems:(MPMediaItemCollection *)mediaItemCollection
{
	if ([mediaItemCollection count] < 1)
    {
		return;
	}
    
	MPMediaItem *song = [[mediaItemCollection items] objectAtIndex:0];
    [self startAnalysisWithSong:song];
}

-(void)startAnalysisWithSong:(MPMediaItem*)inSong {
    if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")) {
        NSNumber *isCloudItem = [inSong valueForProperty:MPMediaItemPropertyIsCloudItem];
        if([isCloudItem boolValue]){
            UIAlertView *cloudItemSupportView = [[UIAlertView alloc] initWithTitle:@"Error reading song" message:@"Cannot analyze cloud music. Download to device and try again." delegate:self cancelButtonTitle:@"Dismiss" otherButtonTitles:nil];
            [cloudItemSupportView show];
            return;
        }
    }
    
    //songLabel.hidden = NO;
	//artistLabel.hidden = NO;
    NSNumber *trackLength = [inSong valueForProperty:MPMediaItemPropertyPlaybackDuration];
    trackLengthinSeconds = [trackLength floatValue];
    
    //NSNumber* persistentID = [inSong valueForProperty:MPMediaItemPropertyPersistentID];
    //persistentId = [persistentID longLongValue];
	//songLabel.text = [inSong valueForProperty:MPMediaItemPropertyTitle];
	//artistLabel.text = [inSong valueForProperty:MPMediaItemPropertyArtist];
    
    [self dismissViewControllerAnimated:YES completion:nil];
    
    [self performSelector:@selector(convertTapped:) withObject:inSong afterDelay:0.2];
}

-(IBAction)convertTapped:(MPMediaItem*)songItem {
    [self deleteFile:@"song.mp3"];
    
    if(![songItem valueForProperty:MPMediaItemPropertyAssetURL])
        return;
    
	NSURL *assetURL = [songItem valueForProperty:MPMediaItemPropertyAssetURL];
    AVURLAsset *songAsset = [AVURLAsset URLAssetWithURL:assetURL options:nil];
    NSError *assetError = nil;
    AVAssetReader* reader = [[AVAssetReader alloc] initWithAsset:songAsset error:&assetError];
    
    if (assetError) {
        NSLog (@"error: %@", assetError);
        return;
    }
    
    AudioChannelLayout channelLayout;
	memset(&channelLayout, 0, sizeof(AudioChannelLayout));
	channelLayout.mChannelLayoutTag = kAudioChannelLayoutTag_Stereo;
    
    
	NSMutableDictionary *outputSettings = [NSMutableDictionary dictionary];
    [outputSettings setObject:[NSNumber numberWithInt:kAudioFormatLinearPCM] forKey:AVFormatIDKey];
    [outputSettings setObject:[NSNumber numberWithFloat:44100] forKey:AVSampleRateKey];
    [outputSettings setObject:[NSNumber numberWithBool:YES] forKey:AVLinearPCMIsFloatKey];
    [outputSettings setObject:[NSNumber numberWithInt:32] forKey:AVLinearPCMBitDepthKey];
    [outputSettings setObject:[NSNumber numberWithInt:2] forKey:AVNumberOfChannelsKey];
    
    NSArray* tracks = [songAsset tracksWithMediaType:AVMediaTypeAudio];
    AVAssetReaderAudioMixOutput *audioMixOutput = [AVAssetReaderAudioMixOutput assetReaderAudioMixOutputWithAudioTracks:tracks audioSettings :outputSettings];
    
    [reader addOutput:audioMixOutput];
    
    
    totalSize = 0;
    
    // -- BACKGROUND THREAD --//
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH,
                                             (unsigned long)NULL), ^(void) {
        
        int local_times = 0;
        
        if(![reader startReading])
            NSLog( @"Cannot start reading");
        CMSampleBufferRef sample = NULL;
        CMBlockBufferRef buffer = NULL;
        
        lame_t lame = lame_init();
        lame_set_in_samplerate(lame, SAMPLE_RATE);
        lame_set_out_samplerate(lame, SAMPLE_RATE);
        lame_set_num_channels(lame, 2);
        lame_set_brate(lame, 96);
        lame_init_params(lame);
        
        while (true)
        {
            sample = [audioMixOutput copyNextSampleBuffer];
            
            if(sample == NULL || [reader status] != AVAssetReaderStatusReading){
                break;
            }
            
            local_times++; float secs = local_times * TIME_INTERVAL;
            if(local_times % 10 == 0)
                [self performSelectorOnMainThread:@selector(updateProgress:) withObject:[NSNumber numberWithFloat:secs] waitUntilDone:NO];
            
            buffer = CMSampleBufferGetDataBuffer( sample );
            AudioBufferList audioBufferList;
            
            CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer(sample, NULL, &audioBufferList, sizeof(audioBufferList), NULL, NULL,
                                                                    kAudioFormatFlagsNativeEndian | kAudioFormatFlagIsPacked | kAudioFormatFlagIsFloat | kAudioFormatFlagIsNonInterleaved, &buffer);
            
            for (int bufferCount=0; bufferCount < audioBufferList.mNumberBuffers; bufferCount++ ) {
                float * tempData = (float*)audioBufferList.mBuffers[bufferCount].mData; //left and right channels are interleaved
                
                // MP3 ENCODING - THIS IS SLOW!!
                if(mp3EncodeSwitch.on)
                {
                    int size = audioBufferList.mBuffers[bufferCount].mDataByteSize/sizeof(float);
                    for(int i = 0; i < size; i+= 2)
                    {
                        songWaveL[i/2] = (short)(tempData[i] * 32767); // SCALE THESE TO MAX of short
                        songWaveR[i/2] = (short)(tempData[i + 1] * 32767);
                    }
                    
                    totalSize = size;
                    
                    int encodedBytes = lame_encode_buffer(lame, songWaveL, songWaveR, size/2, mp3Buffer, BUFFER_SIZE);
                    
                    [self sendDataToServer:mp3Buffer withLength:encodedBytes];
                }
                else
                {
                    [self sendDataToServer:tempData withLength:audioBufferList.mBuffers[bufferCount].mDataByteSize]; // stereo interleaved data
                }

                // SHOULD WE BE STORING ENCODED DATA BEFORE TRANSMITTING??
                //[self WriteData:@"song.mp3" data:mp3Buffer length:encodedBytes];
            }
            
            
            CFRelease( buffer );
            CFRelease( sample );
            
        }
        
        if([reader status] != AVAssetReaderStatusCompleted)
            [reader cancelReading];
        
        [self updateProgress:[NSNumber numberWithFloat:trackLengthinSeconds]];

        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Done." message:@"Done Decoding.."
                                                       delegate:nil cancelButtonTitle:@"Done" otherButtonTitles:nil];
        
        [alert show];
    });
    
}

-(void)WriteData:(NSString*)inFilename data:(void*)inData length:(int)inLength
{
    fp = fopen([[Utils getFilePathWithFileName:inFilename] fileSystemRepresentation],"a");
    if(fp == NULL)
        printf("error creating file");
    else
        fwrite(inData, sizeof(unsigned char), inLength, fp);
    fclose(fp);
}

-(BOOL)deleteFile:(NSString*)inFilename
{
    NSError *error;
    return [[NSFileManager defaultManager] removeItemAtPath:[Utils getFilePathWithFileName:inFilename] error:&error];
}

-(void)updateProgress:(NSNumber*)seconds
{
    float progress = [seconds floatValue]/trackLengthinSeconds;
    [conversionProgress setProgress:progress animated:NO];
}

- (void)mediaPickerDidCancel:(MPMediaPickerController *)mediaPicker {
    [self dismissViewControllerAnimated:YES completion:nil];
}

-(void)sendDataToServer:(void*)inData withLength:(unsigned int)inLength
{
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    
    portno = PORT_NUMBER;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    
    if (sockfd < 0)
    {
        error("ERROR opening socket");
        return;
    }
    
    server = gethostbyname(SERVER_ADDRESS);
    
    if (server == NULL)
    {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }
    
    bzero((char *) &serv_addr, sizeof(serv_addr));
    
    serv_addr.sin_family = AF_INET;
    
    bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
    
    serv_addr.sin_port = htons(portno);
    
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
    {
        error("ERROR connecting");
        return;
    }
    
    n = write(sockfd,inData, inLength);
    if (n < 0)
    {
        error("ERROR writing to socket");
        return;
    }
    
    char returnBuffer[256];
    
    n = read(sockfd,returnBuffer, 1);
    
    if (n < 0)
    {
        error("ERROR reading from socket");
        return;
    }
    printf("%s\n",returnBuffer);
    close(sockfd);
}

@end
