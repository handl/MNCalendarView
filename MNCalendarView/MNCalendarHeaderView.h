//
//  MNCalendarHeaderView.h
//  MNCalendarView
//
//  Created by Min Kim on 7/26/13.
//  Copyright (c) 2013 min. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const MNCalendarHeaderViewIdentifier;

@interface MNCalendarHeaderView : UICollectionReusableView

@property(nonatomic,strong,readonly) UILabel *titleLabel;
@property(nonatomic,strong,readonly) UILabel *titleYearLabel;
@property(nonatomic,strong) NSDate *date;
@property (nonatomic, strong) NSString *defaultFontFamilyName;
@property (nonatomic, strong) NSString *defaultBoldFontFamilyName;
@property (nonatomic, strong) NSString *defaultLightFontFamilyName;
@property (nonatomic, strong) UIColor *defaultColor;

@end
