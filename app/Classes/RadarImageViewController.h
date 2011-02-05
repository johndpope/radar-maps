#import <UIKit/UIKit.h>
#import "Three20Network/Three20Network.h"

@interface RadarImageViewController : UIViewController <TTURLRequestDelegate> {
  IBOutlet UIImageView *radarImageView;
  IBOutlet UIToolbar *theToolbar;
  UISlider *theSlider;
  NSCalendar *calendar;
  NSDate *startDate;
  int selectedPage;
  BOOL firstImageDisplayed;
  BOOL playing;
  NSMutableDictionary *radarImages;
  NSData *labelData;
  NSString *shortLabel;
}

@property (nonatomic, retain) IBOutlet UIImageView *radarImageView;
@property (nonatomic, retain) NSString *shortLabel;

- (id)initWithShortLabel:(NSString *)shortLabel;

- (void)sliderMoved:(UISlider *)sender;
- (void)buildMapLabels;
- (void)displayPage:(int)page;

- (void)fetchAllPages;
- (void)queueLabelsForFetch;
- (void)queuePageForFetch:(int)page;

@end
