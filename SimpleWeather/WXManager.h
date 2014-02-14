//
//  WXManager.h
//  SimpleWeather
//
//  Created by Georgi Ivanov on 2/13/14.
//  Copyright (c) 2014 Georgi Ivanov. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa.h>

#import "WXCondition.h"

@interface WXManager : NSObject
<CLLocationManagerDelegate>

+(instancetype)sharedManager;

@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray* hourlyForecast;
@property (nonatomic, strong, readonly) NSArray* dailyForecast;

-(void)findCurrentLocation;

@end
