//
//  CustomTableCell.h
//  CustomTable
//
//  Created by admin on 14/7/3.
//  Copyright (c) 2014年 YEHKUO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableCell : UITableViewCell

@property (nonatomic,weak) IBOutlet UILabel *nameLabel;
@property (nonatomic,weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic,weak) IBOutlet UIImageView *smallImageView;

@end
