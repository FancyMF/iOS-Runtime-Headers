/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MusicRadioPlaybackContext;

@interface MusicRadioGatewayQueueFeeder : MPRadioGatewayQueueFeeder {
    MusicRadioPlaybackContext *_radioPlaybackContext;
}

@property(retain) MusicRadioPlaybackContext * radioPlaybackContext;

- (void).cxx_destruct;
- (BOOL)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (id)radioPlaybackContext;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (void)setRadioPlaybackContext:(id)arg1;

@end