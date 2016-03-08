//
//  SAVideoPlayer.h
//  Pods
//
//  Created by Gabriel Coman on 05/03/2016.
//
//

#import <UIKit/UIKit.h>

@class AVPlayer;
@class AVPlayerLayer;

//
// @protocol for the SAVideoPlayerProtocol
@protocol SAVideoPlayerProtocol <NSObject>

//
// @brief: player ready
- (void) didFindPlayerReady;

//
// @brief: called when the player starts
- (void) didStartPlayer;

//
// @brief: called when the player reaches 1/4 of playing time
- (void) didReachFirstQuartile;

//
// @brief: called when the player reaches 1/2 of playing time
- (void) didReachMidpoint;

//
// @brief: called when the player reaches 3/4 of playing time
- (void) didReachThirdQuartile;

//
// @brief: called when the player reaches the end of playing time
- (void) didReachEnd;

//
// @brief: called when the player terminates with error
- (void) didPlayWithError;

//
// @brief: go to URL
- (void) didGoToURL;

@end

@interface SAVideoPlayer : UIView

// delegate method
@property (nonatomic, weak) id<SAVideoPlayerProtocol> delegate;

// main function
- (void) playWithMediaURL:(NSURL *)url;

// update
- (void) updateToFrame:(CGRect)frame;

// destroy for good
- (void) destroy;

// reset
- (void) reset;

// getters
- (AVPlayer*) getPlayer;
- (AVPlayerLayer*) getPlayerLayer;

@end