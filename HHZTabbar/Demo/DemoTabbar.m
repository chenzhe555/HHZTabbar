//
//  DemoTabbar.m
//  HHZTabbar
//
//  Created by 陈哲是个好孩子 on 2017/7/18xyzzx.
//  Copyright © 2017年 陈哲是个好孩子. All rights reserved.
//

#import "DemoTabbar.h"
#import "HHZTabbarModel.h"
#import "DemoTabbarTool.h"
#import "DemoOneViewController.h"
#import "DemoTwoViewController.h"

@interface DemoTabbar ()

@end

@implementation DemoTabbar

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

+(instancetype)createTabbarWithTabArray:(NSArray *)tabbarArray
{
    DemoTabbar * tabbar = [[DemoTabbar alloc] init];
    NSMutableArray * nacArr = [NSMutableArray array];
    NSMutableArray * titleArr = [NSMutableArray array];
    NSMutableArray * normalArr = [NSMutableArray array];
    NSMutableArray * selectArr = [NSMutableArray array];
    NSMutableArray * extraArr = [NSMutableArray array];
    HHZTabbarModel * model = nil;
    for (int i = 0; i < tabbarArray.count; ++i) {
        model = (HHZTabbarModel *)tabbarArray[i];
        //后续通过类名生成
        if (model.isBigNoClicked) {
            [extraArr addObject:@"m_"];
        }
        else {
            [extraArr addObject:@""];
        }
        [nacArr addObject:[self createNav:model.sourceVC]];
        [titleArr addObject:model.title];
        [normalArr addObject:model.normalImageUrl];
        [selectArr addObject:model.selectImageUrl];
    }
    [tabbar setTitleArray:titleArr normalImageArray:normalArr selectedImageArray:selectArr ExtraArray:extraArr];
    tabbar.viewControllers = nacArr;
    [tabbar createTabbar];
    [[DemoTabbarTool shareManager] getTabbarInstance:tabbar];
    return tabbar;
}

+(UINavigationController *)createNav:(NSString *)sourceVC
{
    UIViewController * vc = nil;
    if ([sourceVC isEqualToString:@"DemoOneViewController"])
    {
        vc = [[UIViewController alloc] initWithNibName:@"DemoOneViewController" bundle:nil];
    }
    else if ([sourceVC isEqualToString:@"DemoTwoViewController"])
    {
        vc = [[UIViewController alloc] initWithNibName:@"DemoTwoViewController" bundle:nil];
    }
    UINavigationController * nac = [[UINavigationController alloc] initWithRootViewController:vc];
    return nac;
}

-(void)barItemClicked:(HHZTabbarItem *)item
{
    if (item.isBigNoClicked)
    {
        UIAlertView * alert = [[UIAlertView alloc] initWithTitle:@"点到了中间" message:nil delegate:nil cancelButtonTitle:@"确定" otherButtonTitles: nil];
        [alert show];
    }
    else
    {
        [self exchangeCurrentItem:item];
    }
}

@end
