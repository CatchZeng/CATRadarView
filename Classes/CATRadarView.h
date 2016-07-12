//
//  CATRadarView.h
//  CATRadarView
//
//  Created by catch on 16/7/12.
//  Copyright © 2016年 catch. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  雷达、波纹、咻一咻图
 */
@interface CATRadarView : UIView

//波纹填充色
@property (nonatomic, strong) UIColor *fillColor;

//波纹的数量
@property (nonatomic, assign) NSInteger instanceCount;

//波纹之间的延迟
@property (nonatomic, assign) CFTimeInterval instanceDelay;

//波纹初始透明度（最内圈）
@property (nonatomic, assign) CGFloat opacityValue;

//动画的时长
@property (nonatomic, assign) CFTimeInterval animationDuration;

/**
 *  开启动画
 */
-(void)startAnimation;

/**
 *  关闭动画
 */
-(void)stopAnimation;

@end
