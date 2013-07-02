//
//  BIDViewController.h
//  Controls
//
//  Created by daniel moore on 6/29/13.
//  Copyright (c) 2013 daniel moore. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController<UIActionSheetDelegate>
@property (weak, nonatomic) IBOutlet UIButton *doSomethingButton;
@property (weak, nonatomic) IBOutlet UISwitch *rightSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *leftSwitch;
@property (weak, nonatomic) IBOutlet UITextField *numberField;
@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UILabel *sliderLabel;

- (IBAction)textFieldDoneEditing:(id)sender;
- (IBAction)backgroundTap:(id)sender;
- (IBAction)sliderChanged:(UISlider *)sender;
- (IBAction)buttonPressed:(id)sender;
- (IBAction)toggleControls:(UISegmentedControl *)sender;
- (IBAction)switchChanged:(UISwitch *)sender;
@end
