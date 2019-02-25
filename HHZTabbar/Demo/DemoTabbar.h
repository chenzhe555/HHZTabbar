//
//  DemoTabbar.h
//  HHZTabbar
//
//  Created by 陈哲是个好孩子 on 2017/7/18.
//  Copyright © 2017年 陈哲是个好孩子. All rights reserved.
//

#import "HHZTabbar.h"

@interface DemoTabbar : HHZTabbar

/**
 创建Tabbar视图

 @param tabbarArray HHZTabbarModel数组
 @return DemoTabbar 实例
 */
+(instancetype)createTabbarWithTabArray:(NSArray *)tabbarArray;
@end
