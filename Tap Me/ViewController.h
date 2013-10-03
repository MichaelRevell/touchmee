//
//  ViewController.h
//  Tap Me
//
//  Created by Michael Revell on 10/3/13.
//  Copyright (c) 2013 Michael Revell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
}

- (IBAction)buttonPressed;

@end
