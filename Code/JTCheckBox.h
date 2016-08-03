//
//  JTCheckBox.h
//  CheckBox
//
//  Created by JobsTorvalds on 16/8/3.
//  Copyright © 2016年 JobsTorvalds. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JTCheckBox;
typedef NS_ENUM(NSInteger, BoxType) {
    BoxTypeCircle,//圆形复选框
    BoxTypeSquare//正方形复选框
};
typedef NS_ENUM(NSInteger,AnimationType){
    AnimationTypeStroke,//点击动画为从两点钟方向顺时针走一圈 完成加载
    AnimationTypeFill,//出现中动画为从中心出现然后向四周扩大 消失动画为从中心消失
    AnimationTypeBounce,//淡入淡出动画
    AnimationTypeFlat,//变形动画+淡入淡出效果
    AnimationTypeOneStroke,//从一点钟位置开始绘制 从一点钟位置开始消失
    AnimationTypeFade//缓慢出现 缓慢消失
};
@protocol CheckBoxDelegate <NSObject>
@optional
//每次点击的时候可以通过这个代理获取view的状态
- (void)didTapCheckBox:(JTCheckBox*)checkBox;
- (void)animationDidStopForCheckBox:(JTCheckBox *)checkBox;
@end
@interface JTCheckBox : UIView

@property (nonatomic) BOOL on;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat animationDuration;
@property (nonatomic) BOOL hideBox;
@property (nonatomic,strong) UIColor *onTintColor;
@property (nonatomic,strong) UIColor *onFillColor;
@property (nonatomic,strong) UIColor *onCheckColor;
@property (nonatomic,strong) UIColor *tintColor;
@property (nonatomic) BoxType boxType;
@property (nonatomic) AnimationType onAnimationType;
@property (nonatomic) AnimationType offAnimationType;
@property (assign,nonatomic) CGSize minimumTouchSize;
@property (nonatomic) id<CheckBoxDelegate>delegate;
- (void)setOn:(BOOL)on animated:(BOOL)animated;
- (void)reload;

/***
 *onTintColor 点击时的填充色
 *TintColor 未点击时的填充色
 *lineWidth 线条宽度
 *animationDuration 动画出现的时长
 *minimumTouchSize 最小点击区域大小
 */
- (instancetype)initWithFrame:(CGRect)frame JTBoxType:(BoxType)BoxType JTAnimationType:(AnimationType)AnimationType onTintColor:(UIColor *)OTcolor TintColor:(UIColor *)Tcolor lineWidth:(CGFloat)width animationDuration:(CGFloat)Duration minimumTouchSize:(CGSize)touchSize;



/***
 *onTintColor 点击时的填充色
 *TintColor 未点击时的填充色
 *lineWidth 线条宽度
 *animationDuration 动画出现的时长
 *minimumTouchSize 最小点击区域大小
 */
- (instancetype)initWithCoder:(NSCoder *)aDecoder JTBoxType:(BoxType)BoxType JTAnimationType:(AnimationType)AnimationType onTintColor:(UIColor *)OTcolor TintColor:(UIColor *)Tcolor lineWidth:(CGFloat)width animationDuration:(CGFloat)Duration minimumTouchSize:(CGSize)touchSize;

@end
