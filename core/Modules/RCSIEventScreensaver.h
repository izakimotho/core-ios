//
//  RCSIEventScreensaver.h
//  RCSIphone
//
//  Created by kiodo on 12/03/12.
//  Copyright 2012 HT srl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCSIEvent.h"

@interface _i_EventScreensaver : _i_Event
{
  int isDeviceLocked;
}

@property (readwrite) int isDeviceLocked;

//- (void)setStandByTimer;
- (id)init;

@end
