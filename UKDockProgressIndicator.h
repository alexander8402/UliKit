//
//  UKDockProgressIndicator.h
//  Doublette
//
//  Created by Uli Kusterer on 30.04.05.
//  Copyright 2005 M. Uli Kusterer. All rights reserved.
//

#import <Cocoa/Cocoa.h>


/* A class that displays a determinate progress indicator (progress bar)
    on top of the app's icon in the dock. Use it just like an NSProgressIndicator.
    You can even have it call through to another progress indicator if desired. */

@interface UKDockProgressIndicator : NSObject
{
    double                          max;
    double                          min;
    double                          current;
    IBOutlet NSProgressIndicator*   progress;
}

// NSProgressIndicator compatibility stuff:
//  These forward to "progress" if you've hooked that up in IB.
-(void)     setMinValue: (double)mn;
-(double)   minValue;

-(void)     setMaxValue: (double)mn;
-(double)   maxValue;

-(void)     setDoubleValue: (double)mn;
-(double)   doubleValue;

-(void)     setNeedsDisplay: (BOOL)mn;
-(void)     display;

-(void)     setHidden: (BOOL)flag;
-(BOOL)     isHidden;

// private:
-(void)     updateDockTile;

@end
