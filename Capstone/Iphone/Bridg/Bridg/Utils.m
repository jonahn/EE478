//
//  Utils.m
//  Bridg
//
//  Created by Ahmed Jafri on 5/20/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#import "Utils.h"

@implementation Utils

+(NSString*)getFilePathWithFileName:(NSString*)fileName {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docs_dir = [paths objectAtIndex:0];
    NSString* fullFilePath = [docs_dir stringByAppendingPathComponent:fileName];
    return fullFilePath;
}

@end
