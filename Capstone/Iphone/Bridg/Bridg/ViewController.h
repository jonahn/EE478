//
//  ViewController.h
//  Bridg
//
//  Created by Ahmed Jafri on 5/6/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@interface ViewController : UIViewController <MPMediaPickerControllerDelegate>
{
    IBOutlet UIButton       *pickSongButton;
    IBOutlet UISwitch       *mp3EncodeSwitch;
}

@property (nonatomic, retain) IBOutlet UIProgressView *conversionProgress;

-(IBAction)pickSong:(id)sender;

@end
