//
//  TutHelloWorldViewController.h
//  TutHelloWorld
//
//  Created by takashi on 2014/05/06.
//  Copyright (c) 2014年 ti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TutHelloWorldViewController : UIViewController
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;
@end
