# CATRadarView

iOS radar view

# Effect

![Effect](https://github.com/CatchZeng/CATRadarView/blob/master/CATRadarView.gif)

# Installation

Add  CATRadarView.h & CATRadarView.m to your project.


# Usage

You can init CATRadarView in code or xib.


Animation

```objective-c

[_radarView startAnimation];

[_radarView stopAnimation];

```

Customization

```objective-c

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


```