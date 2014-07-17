//
//  Recipe.h
//  CustomTable
//
//  Created by admin on 14/7/7.
//  Copyright (c) 2014年 YEHKUO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject

@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *image;
@property (nonatomic,strong) NSString *prepTime;
@property (nonatomic,strong) NSArray  *ingredients;

@end
