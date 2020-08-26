//
//  SDImageHEIFCoder.h
//  SDWebImageHEIFCoder
//
//  Created by lizhuoli on 2018/5/8.
//

#if __has_include(<SDWebImage/SDWebImage.h>)
#import <SDWebImage/SDWebImage.h>
#else
@import SDWebImage;
#endif

/**
 A Boolean value indicating whether to decode only the thumbnail of the image during decoding. (NSNumber). If not provide, decoded image will be downscaled to provided thumbnail size if need. Default value is NO.
 @note works for `SDImageHEIFCoder`.
 */
FOUNDATION_EXPORT SDImageCoderOption _Nonnull const SDImageCoderDecodeThumbnailOnly;

@interface SDImageHEIFCoder : NSObject <SDImageCoder>

@property (nonatomic, class, readonly, nonnull) SDImageHEIFCoder *sharedCoder;

@end
