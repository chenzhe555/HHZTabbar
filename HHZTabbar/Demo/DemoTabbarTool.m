//
//  DemoTabbarTool.m
//  HHZTabbar
//
//  Created by 陈哲是个好孩子 on 2017/7/18.陈哲
//  Copyright © 2017年 陈哲是个好孩子. All rights reserved.
//

#import "DemoTabbarTool.h"
#import "DemoTabbar.h"

@implementation DemoTabbarTool
-(void)getTabbarInstance:(id)tabbar
{
    self.tabbar = (DemoTabbar *)tabbar;
}

+(instancetype)shareManager
{
    static DemoTabbarTool * tool = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tool = [[DemoTabbarTool alloc] init];
    });
    return tool;
}

-(CGFloat)getTabbarHeight
{
    return [self.tabbar getTabbarHeight];
}
@end
