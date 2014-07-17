//
//  AboutViewController.m
//  CustomTable
//
//  Created by admin on 14/7/7.
//  Copyright (c) 2014年 YEHKUO. All rights reserved.
//

#import "AboutViewController.h"

@implementation AboutViewController


- (void)viewDidLoad
{
    [super viewDidLoad];

    NSURL *url = [NSURL fileURLWithPath:[[NSBundle mainBundle]pathForResource:@"about.html" ofType:nil]];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [self.webView loadRequest:request];
                  
}

@end
