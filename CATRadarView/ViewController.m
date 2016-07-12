//
//  ViewController.m
//  CATRadarView
//
//  Created by zengcatch on 16/7/12.
//  Copyright © 2016年 catch. All rights reserved.
//

#import "ViewController.h"
#import "CATRadarView.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet CATRadarView *radarView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _radarView.fillColor = [UIColor blueColor];
    _radarView.instanceCount = 4;
    _radarView.instanceDelay = 1;
    _radarView.animationDuration = _radarView.instanceCount* _radarView.instanceDelay;
    _radarView.opacityValue = 0.6f;
    
    [_radarView startAnimation];
}

-(void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    
    [_radarView stopAnimation];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
