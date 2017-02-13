//
//  MainViewController.h
//  ZXCTabBar
//
//  Created by 周希财 on 2017/2/13.
//  Copyright © 2017年 iOS_ZXC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UITabBarController
/*接受远程通知*/
- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;
/*在前台接受远程通知*/
- (void)didReceiveForeRemoteNotification:(NSDictionary *)userInfo;
@end
