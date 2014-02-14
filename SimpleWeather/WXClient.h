//
//  WXClient.h
//  SimpleWeather
//
//  Created by Georgi Ivanov on 2/13/14.
//  Copyright (c) 2014 Georgi Ivanov. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
#import <ReactiveCocoa.h>
@import Foundation;


@interface WXClient : NSObject

-(RACSignal *)fetchJSONFromURL:(NSURL*)url;
-(RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
-(RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
-(RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;



@end
