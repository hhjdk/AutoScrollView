//
//  UIView+Extnesion.h
//  AutoScrollView
//
//  Created by LANJIE on 16/5/6.
//  Copyright © 2016年 俞涛涛. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extnesion)
@property (nonatomic,assign) CGFloat x;
@property (nonatomic,assign) CGFloat y;
@property (nonatomic,assign) CGFloat centerX;
@property (nonatomic,assign) CGFloat centerY;
@property (nonatomic,assign) CGFloat width;
@property (nonatomic,assign) CGFloat height;
@property (nonatomic,assign) CGSize size;
@property (nonatomic,assign) CGPoint origin;


@end
@interface UIView (FindFirstResponder)

- (UIView *)findFirstResponder;

@end