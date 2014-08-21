//
//  UIView+ConvenienceAdditions.h
//  Foxtel Guide
//
//  Created by Nathan de Vries on 22/10/09.
//  Copyright 2009 Nathan de Vries. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIView (ConvenienceAdditions)

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize size;

- (void)centerVertically;
- (void)centerHorizontally;
- (void)centerInSuperview;
- (void)ensureIntegralFrame;
- (void)removeAllSubviews;

@end
