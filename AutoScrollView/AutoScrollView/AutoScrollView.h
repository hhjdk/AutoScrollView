//
//  AutoScrollView.h
//  AutoScrollView
//
//  Created by LANJIE on 16/5/6.
//  Copyright © 2016年 俞涛涛. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AutoScrollViewDelegate<NSObject>
@optional
/** 这本质上是一个collectionView 只有item,没有row */
-(void)Auto_scrollView:(UICollectionView *)scrollView didSelectItemAtIndexPath:(NSIndexPath *)indexPath;

- (void)Auto_scrollViewDidScroll:(UIScrollView *)scrollView;
@end

@interface AutoScrollView : UICollectionView <UICollectionViewDataSource , UICollectionViewDelegate>
@property (nonatomic ,strong) NSArray *images;
@property(nonatomic,assign)id <AutoScrollViewDelegate>Auto_delegate;

@end
