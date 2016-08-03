//
//  CheckBox.h
//  JTCheckBox
//
//  Created by JobsTorvalds on 16/8/3.
//  Copyright © 2016年 JobsTorvalds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JTCheckBox.h"
@interface CheckBox : NSObject

/**
 BoxType:
  BoxTypeCircle,
  BoxTypeSquare
 */
/**
 AnimationType:
  AnimationTypeStroke,//Animates the box and the check as if they were drawn.
  AnimationTypeFill,//When tapped, the checkbox is filled from its center.
  AnimationTypeBounce,//Animates the check mark with a bouncy effect.
  AnimationTypeFlat,//Morphs the checkmark from a line.
  AnimationTypeOneStroke,//Animates the box and check as if they were drawn in one continuous line.
  AnimationTypeFade//When tapped, the checkbox is fading in or out (opacity).
 */


@end
