//
//  JTPathManager.h
//  CheckBox
//
//  Created by JobsTorvalds on 16/8/3.
//  Copyright © 2016年 JobsTorvalds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JTCheckBox.h"
#import <UIKit/UIKit.h>

@interface JTPathManager : NSObject

@property (nonatomic) CGFloat size;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) BoxType boxType;

- (UIBezierPath *)pathForBox;
- (UIBezierPath *)pathForCheckMark;
- (UIBezierPath *)pathForLongCheckMark;
- (UIBezierPath *)pathForFlatCheckMark;


@end
