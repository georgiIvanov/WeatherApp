//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Georgi Ivanov on 2/13/14.
//  Copyright (c) 2014 Georgi Ivanov. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

+(NSDictionary *)JSONKeyPathsByPropertyKey {
    
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];

    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";

    return paths;
}

@end
