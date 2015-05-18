//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Detector: NSObject

- (id)init;
- (UIImage *)recognizeFace:(UIImage *)image;
- (UIImage *)recognizeGesture:(UIImage *)image;

@end