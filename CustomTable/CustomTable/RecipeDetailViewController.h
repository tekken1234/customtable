//
//  RecipeDetailViewController.h
//  CustomTable
//
//  Created by admin on 14/7/7.
//  Copyright (c) 2014年 YEHKUO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface RecipeDetailViewController : UIViewController

//@property (nonatomic,strong) NSString *preptime;
// @property (nonatomic,strong) NSString *recipeName;

@property (strong, nonatomic) IBOutlet UIImageView *recipeImageView;
@property (strong, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (strong, nonatomic) IBOutlet UITextView *ingredientsTextView;


@property (nonatomic,strong) Recipe *recipe;

@end
