//
//  HelloWorldViewController.h
//  Helloworld2
//
//  Created by 2009-12 on 12/10/12.
//  Copyright (c) 2012 MSKCC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>

- (IBAction)changeGreeting:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (weak, nonatomic) IBOutlet UILabel *label;

@property (copy, nonatomic) NSString *userName;

@end
