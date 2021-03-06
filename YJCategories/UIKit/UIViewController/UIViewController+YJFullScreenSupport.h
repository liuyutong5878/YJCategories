//
//  UIViewController+YJFullScreenSupport.h
//  YJCategoriesGather
//
//  Created by YJHou on 2015/3/17.
//  Copyright © 2015年 侯跃军 houmanager@Hotmail.com. All rights reserved.
//  本类通过修改系统控件的Frame, 以便支持满屏

#import <UIKit/UIKit.h>

typedef void(^YJFinishedBlock)(BOOL finished);

@interface UIViewController (YJFullScreenSupport)

/** 显示导航栏 */
- (void)yj_showNavigationBar:(BOOL)animated toStatusBar:(BOOL)toStatusBar duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 隐藏导航栏 */
- (void)yj_hideNavigationBar:(BOOL)animated toStatusBar:(BOOL)toStatusBar duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 移动导航栏 */
- (void)yj_moveNavigtionBar:(CGFloat)deltaY animated:(BOOL)animated toStatusBar:(BOOL)toStatusBar duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 设置导航栏起始位置 */
- (void)yj_setNavigationBarOriginY:(CGFloat)y animated:(BOOL)animated toStatusBar:(BOOL)toStatusBar duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;


/** 显示Toolbar */
- (void)yj_showToolbar:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 隐藏ToolBar */
- (void)yj_hideToolbar:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 移动ToolBar */
- (void)yj_moveToolbar:(CGFloat)deltaY animated:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 设置ToolBar起始位置 */
- (void)yj_setToolbarOriginY:(CGFloat)y animated:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;


/** 显示TabBar */
- (void)yj_showTabBar:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 隐藏TabBar */
- (void)yj_hideTabBar:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 移动TabBar */
- (void)yj_moveTabBar:(CGFloat)deltaY animated:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

/** 设置TabBar起始位置 */
- (void)yj_setTabBarOriginY:(CGFloat)y animated:(BOOL)animated duration:(NSTimeInterval)duration completion:(YJFinishedBlock)completion;

@end
