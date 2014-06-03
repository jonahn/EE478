//
//  ViewController.h
//  Bridg
//
//  Created by Ahmed Jafri on 5/6/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "SimplePing.h"

@interface ViewController : UIViewController <MPMediaPickerControllerDelegate, SimplePingDelegate>
{
    IBOutlet UIButton       *pickSongButton;
}

@property (nonatomic, retain) IBOutlet UIProgressView *conversionProgress;

-(IBAction)pickSong:(id)sender;

@end
