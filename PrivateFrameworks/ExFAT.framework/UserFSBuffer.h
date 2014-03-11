/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
 */

@interface UserFSBuffer : NSObject <NSDiscardableContent> {
    unsigned long _allocatedSize;
    void *_buffer;
    unsigned int _busyCount;
    BOOL _dirty;
    int _fd;
    unsigned long _length;
    unsigned long long _offset;
}

@property(readonly) void* buffer;
@property BOOL dirty;
@property(readonly) unsigned long length;
@property(readonly) unsigned long long offset;

- (int)_readBlockContents;
- (int)_writeBlockContents;
- (BOOL)beginContentAccess;
- (void*)buffer;
- (BOOL)dirty;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)initWithOffset:(unsigned long long)arg1 length:(unsigned long)arg2 fileDescriptor:(int)arg3;
- (BOOL)isContentDiscarded;
- (unsigned long)length;
- (unsigned long long)offset;
- (int)resizeToLength:(unsigned long)arg1;
- (void)setDirty:(BOOL)arg1;

@end