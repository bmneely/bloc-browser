//
//  ViewController.h
//  BlocBrowser
//
//  Created by Ben Neely on 5/19/15.
//  Copyright (c) 2015 Ben Neely. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;

@end

