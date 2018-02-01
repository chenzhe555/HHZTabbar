//
//  HHZTabbar.h
//  iOS-HHZUniversal
//
//  Created by 陈哲#376811578@qq.com on 16/12/6.
//  Copyright © 2016年 陈哲是个好孩子. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HHZTabbarItem.h"

@interface HHZTabbar : UITabBarController<HHZTabbarItemDelegate>
//文字字体大小
@property (nonatomic, assign) NSInteger fontSize;
/**
 *  用于记录tabbar的高度，用于可复用于手动适配
 */
@property (nonatomic, assign) CGFloat tabbarHeight;

/**
 *  自定义的tabbarView，放在tabVC上面
 */
@property (readonly,strong, nonatomic) UIView * customBarView;

/**
 *  是否显示tabbarView上的那一条线
 */
@property (nonatomic, assign) BOOL isShowTopLine;


#pragma mark 对外接口
-(void)exchangeCurrentItem:(HHZTabbarItem *)item;
#pragma mark 对外接口 ---> Tabbar的显示操作
/**
 *  是否以动画形式显示tabbar
 */
-(void)showTabbarView:(BOOL)isAnimate;

/**
 *  是否以动画形式隐藏tabbar
 */
-(void)hideTabbarView:(BOOL)isAnimate;

/**
 *  传入index索引值切换到相应tabbarItem目录下
 *
 */
-(void)switchTabbarItem:(NSInteger)index;

#pragma mark 对外接口 ---> 创建Tabbar视图
/**
 *  设置数据源
 *
 *  @param titleArr      底部文字数组
 *  @param normalArray   底部正常图片数组
 *  @param selectedArray 底部选中图片数组
 */
-(void)setTitleArray:(NSArray *)titleArr normalImageArray:(NSArray *)normalArray selectedImageArray:(NSArray *)selectedArray;

/**
 *  设置数据源
 *
 *  @param titleArr      底部文字数组
 *  @param normalArray   底部正常图片数组
 *  @param selectedArray 底部选中图片数组
 *  @param extraArray    额外配置参数数组
 */
-(void)setTitleArray:(NSArray *)titleArr normalImageArray:(NSArray *)normalArray selectedImageArray:(NSArray *)selectedArray ExtraArray:(NSArray *)extraArray;

/**
 *  数据源设置完后，创建自定义视图(必须调用)
 */
-(void)createTabbar;

#pragma mark 对外接口 ---> 配置/获取基本参数
/**
 *  设置动画时间(必须在createTabbar之前传入)
 *
 */
-(void)setAnimationTime:(CGFloat)time;

/**
 *  获取Tabbar高度
 *
 */
-(CGFloat)getTabbarHeight;
@end
