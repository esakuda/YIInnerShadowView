//
//  YIInnerShadowView.h
//  YIInnerShadowView
//
//  Created by María Eugenia Sakuda on 2/16/16.
//  Copyright © 2016 inamiy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

//! Project version number for YIInnerShadowView.
FOUNDATION_EXPORT double YIInnerShadowViewVersionNumber;

//! Project version string for YIInnerShadowView.
FOUNDATION_EXPORT const unsigned char YIInnerShadowViewVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YIInnerShadowView/PublicHeader.h>

#import "YIInnerShadowLayer.h"

@interface YIInnerShadowView : UIView

@property (nonatomic, strong, readonly) YIInnerShadowLayer* innerShadowLayer;

@property (nonatomic) YIInnerShadowMask shadowMask;

@property (nonatomic, strong) UIColor* shadowColor;
@property (nonatomic)         CGFloat  shadowOpacity;
@property (nonatomic)         CGSize   shadowOffset;
@property (nonatomic)         CGFloat  shadowRadius;

@property (nonatomic)         CGFloat  cornerRadius;

@end