//
//  MNCalendarViewDayCell.h
//  MNCalendarView
//
//  Created by Min Kim on 7/28/13.
//  Copyright (c) 2013 min. All rights reserved.
//

#import "MNCalendarViewCell.h"

extern NSString *const MNCalendarViewDayCellIdentifier;

@interface MNCalendarViewDayCell : MNCalendarViewCell

@property(nonatomic,strong,readonly) NSDate *date;
@property(nonatomic,strong,readonly) NSDate *month;

@property (nonatomic, strong) NSString *defaultFontFamilyName;
@property (nonatomic, strong) NSString *defaultBoldFontFamilyName;
@property (nonatomic, strong) UIColor *defaultInactiveColor;
@property (nonatomic, strong) UIColor *defaultActiveColor;

- (void)setDate:(NSDate *)date
          month:(NSDate *)month
       calendar:(NSCalendar *)calendar;

@end
