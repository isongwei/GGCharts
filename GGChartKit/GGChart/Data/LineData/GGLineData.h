//
//  GGLineData.h
//  GGCharts
//
//  Created by 黄舜 on 17/8/4.
//  Copyright © 2017年 I really is a farmer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GGLineData : NSObject

@property (nonatomic, assign) CGFloat lineWidth;

@property (nonatomic, assign) UIColor * lineColor;

@property (nonatomic, assign) CGFloat shapeRadius;

@property (nonatomic, strong) UIColor * shapeFillColor;

@property (nonatomic, strong) UIFont * stringFont;

@property (nonatomic, strong) NSString * dataFormatter;

@property (nonatomic, strong, readonly) DLineScaler * lineScaler;

@property (nonatomic, assign) NSArray <NSNumber *> *lineDataAry;

@end
