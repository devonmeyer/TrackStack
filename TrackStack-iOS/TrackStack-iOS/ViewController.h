//
//  ViewController.h
//  TrackStack-iOS
//
//  Created by Andrew Rachwalski on 6/28/13.
//  Copyright (c) 2013 Andrew Rachwalski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (weak, nonatomic) IBOutlet UILabel *label;

@property (copy, nonatomic) NSString *userName;

- (IBAction)changeGreeting:(id)sender;

@end
