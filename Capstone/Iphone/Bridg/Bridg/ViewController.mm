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
    float *songWave;
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
    
    songWave = (float *)malloc(SAMPLE_LENGTH * 3 * sizeof(float));
    
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

-(IBAction)sendData:(id)sender
{
    [self sendDataToServer];
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
    [self deleteFile];
    
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
    
    
    __block long totalSize = 0;
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH,
                                             (unsigned long)NULL), ^(void) {
        
        int local_times = 0;
        
        if(![reader startReading])
            NSLog( @"Cannot start reading");
        CMSampleBufferRef sample = NULL;
        CMBlockBufferRef buffer = NULL;
        
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
            
            for (int bufferCount=0; bufferCount < audioBufferList.mNumberBuffers; bufferCount++) {
                songWave = (float*)audioBufferList.mBuffers[bufferCount].mData;
                int size = audioBufferList.mBuffers[bufferCount].mDataByteSize/sizeof(float);
                for(int i = 0; i < size; i+=2)
                    songWave[i/2] = (songWave[i] + songWave[i+1])/2; //combine left and right channels with simple average
                [self WriteSong:size/2];
                totalSize += size/2;
                
            }
            
            [self sendDataToServer];
            
            CFRelease( buffer );
            CFRelease( sample );
            
        }
        
        if([reader status] != AVAssetReaderStatusCompleted)
            [reader cancelReading];
        
        [self updateProgress:[NSNumber numberWithFloat:trackLengthinSeconds]];

        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Done." message:@"Done Decoding.."
                                                       delegate:nil cancelButtonTitle:@"Done" otherButtonTitles:nil];
        
        [alert show];
        //[self analyze:nil];
    });
    
}

-(void)WriteSong:(int)length
{
    fp = fopen([[Utils getFilePathWithFileName:@"song.bin"] fileSystemRepresentation],"a");
    if(fp == NULL)
        printf("error creating file");
    else
        fwrite(songWave, sizeof(float), length, fp);
    fclose(fp);
}

-(BOOL)deleteFile
{
    NSError *error;
    return [[NSFileManager defaultManager] removeItemAtPath:[Utils getFilePathWithFileName:@"song.bin"] error:&error];
}

-(void)updateProgress:(NSNumber*)seconds
{
    float progress = [seconds floatValue]/trackLengthinSeconds;
    [conversionProgress setProgress:progress animated:NO];
}

- (void)mediaPickerDidCancel:(MPMediaPickerController *)mediaPicker {
    [self dismissViewControllerAnimated:YES completion:nil];
}

-(void)sendDataToServer
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
    
    n = write(sockfd,songWave, SAMPLE_LENGTH * 3);
    if (n < 0)
    {
        error("ERROR writing to socket");
        return;
    }
    
    bzero(songWave, SAMPLE_LENGTH * 3);
    
    char returnBuffer[256];
    
    n = read(sockfd,returnBuffer,255);
    
    if (n < 0)
    {
        error("ERROR reading from socket");
        return;
    }
    printf("%s\n",returnBuffer);
    close(sockfd);
}

@end
