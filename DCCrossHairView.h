//
//  DCCrossHairView.h
//
//  Created by Domestic Cat on 3/05/11.
//
#if defined(DEBUG) || defined(TARGET_IPHONE_SIMULATOR)

@interface DCCrossHairView : UIView
{
}

@property (nonatomic, strong) UIColor *color;

- (id)initWithFrame:(CGRect)frame color:(UIColor *)aColor;

@end

#endif