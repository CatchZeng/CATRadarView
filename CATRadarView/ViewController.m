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
    
    [_radarView startAnimation];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
