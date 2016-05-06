//
//  ViewController.m
//  AutoScrollView
//
//  Created by LANJIE on 16/5/6.
//  Copyright © 2016年 俞涛涛. All rights reserved.
//

#import "ViewController.h"
#import "AutoScrollView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //创建自动滚动广告视图
    AutoScrollView *scrollView = [[AutoScrollView alloc]initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height / 4)];
    
    // 一定要先加入视图再传递图片,不然pagecontrol显示不出来
    [self.view addSubview:scrollView];
    
    // 传递图片名称数组给scrollView
    scrollView.images = @[@"1",@"2",@"3",@"1"];
    
    
}

@end
