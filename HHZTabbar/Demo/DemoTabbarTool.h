//
//  DemoTabbarTool.h
//  HHZTabbar
//
//  Created by 陈哲是个好孩子 on 2017/7/18.
//  Copyright © 2017年 陈哲是个好孩子. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class DemoTabbar;

NS_ASSUME_NONNULL_BEGIN

@interface DemoTabbarTool : NSObject
@property (nonatomic, strong) DemoTabbar * tabbar;

/**
 *  获取tabbar实例
 *
 *  @return
 */
+(instancetype)shareManager;


/**
 *  每次项目启动从Appdelegate获取tabbar实例
 *
 *  @param tabbar
 */
-(void)getTabbarInstance:(id)tabbar;


/**
 *  获取tabbar高度
 *
 *  @return
 */
-(CGFloat)getTabbarHeight;
@end

NS_ASSUME_NONNULL_END
