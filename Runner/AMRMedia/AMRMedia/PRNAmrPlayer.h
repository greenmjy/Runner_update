//
//  ChatViewController.h
//  Runner
//
//  Created by 于恩聪 on 24/9/31.
//  Copyright (c) 2015年 于恩聪. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  AMR 文件播放器
 */
@interface PRNAmrPlayer : NSObject

/**
 *  播放
 *
 *  @param fileURL 要播放的AMR文件
 */
- (void)playWithURL:(NSURL *)fileURL;

/**
 *  播放
 *
 *  @param fileURL  要播放的AMR文件路径
 *  @param callback 播放完毕的回调
 */
- (void)playWithURL:(NSURL *)fileURL finished:(void (^)(void))callback;


/**
 *  停止当前的播放
 */
- (void)stop;


/**
 *  是否使用扬声器播放
 *
 *  @param speakMode 是否使用扬声器播放
 */
- (void)setSpeakMode:(BOOL)speakMode;

@end
