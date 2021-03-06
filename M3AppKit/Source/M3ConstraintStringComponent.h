/*****************************************************************
 M3ConstraintStringComponent.h
 M3AppKit
 
 Created by Martin Pilkington on 03/09/2012.
 
 Please read the LICENCE.txt for licensing information
*****************************************************************/

#import <Foundation/Foundation.h>

@interface M3ConstraintStringComponent : NSObject

@property (copy) NSString *keyPath;
@property (copy) NSArray *attributeList;
@property (assign) CGFloat multiplier;
@property (copy) NSArray *constantList;

@end
