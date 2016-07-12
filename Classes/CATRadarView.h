//
//  CATRadarView.h
//  CATRadarView
//
//  Created by catch on 16/7/12.
//  Copyright © 2016年 catch. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Custom Radar View
 */
@interface CATRadarView : UIView

//fill color
@property (nonatomic, strong) UIColor *fillColor;

//instance count
@property (nonatomic, assign) NSInteger instanceCount;

//instance delay
@property (nonatomic, assign) CFTimeInterval instanceDelay;

//opacity
@property (nonatomic, assign) CGFloat opacityValue;

//animation duration
@property (nonatomic, assign) CFTimeInterval animationDuration;

/**
 *  start animation
 */
-(void)startAnimation;

/**
 *  stop animation
 */
-(void)stopAnimation;

@end
