//
//  DataViewController.h
//  Movement
//
//  Created by Markus Klepp on 25/04/14.
//  Copyright (c) 2014 Markus Klepp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
