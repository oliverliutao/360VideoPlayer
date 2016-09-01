//
//  HTYGLKVC.h
//  HTY360Player
//
//  Created by  on 11/8/15.
//  Copyright © 2015 Hanton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@protocol HTYGLKVCDDelegate <NSObject>


@end

@interface HTYGLKVC : GLKViewController<UIGestureRecognizerDelegate>

@property (assign, nonatomic, readonly) BOOL isUsingMotion;

- (void)startDeviceMotion;
- (void)stopDeviceMotion;

-(void)renderInHTY:(CVPixelBufferRef)pb;





@end
