//
//  FFmpegController.h
//  iina
//
//  Created by lhc on 9/6/2017.
//  Copyright © 2017 lhc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FFmpegControllerDelegate <NSObject>

/** 
 Did generated thumbnails for the video.
 */
- (void)didGeneratedThumbnails:(NSArray<NSImage *> *)thumbnails withSuccess:(BOOL)success;

@end


@interface FFmpegController : NSObject

@property(nonatomic, weak) id<FFmpegControllerDelegate> delegate;

@property(nonatomic) NSInteger thumbnailCount;

- (void)generateThumbnailForFile:(NSString *)file;

@end
