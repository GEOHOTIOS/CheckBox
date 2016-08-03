//
//  JTAnimationManager.h
//  CheckBox
//
//  Created by JobsTorvalds on 16/8/3.
//  Copyright © 2016年 JobsTorvalds. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface JTAnimationManager : NSObject
@property (nonatomic) CGFloat animationDuration;
- (instancetype)initWithAnimationDuration:(CGFloat)animationDuration;
- (CABasicAnimation *)strokeAnimationReverse:(BOOL)reverse;
- (CABasicAnimation *)opacityAnimationReverse:(BOOL)reverse;
- (CABasicAnimation *)morphAnimationFromPath:(UIBezierPath *)fromPath toPath:(UIBezierPath *)toPath ;
- (CAKeyframeAnimation *)fillAnimationWithBounces:(NSUInteger)bounces amplitude:(CGFloat)amplitude reverse:(BOOL)reverse;

@end
