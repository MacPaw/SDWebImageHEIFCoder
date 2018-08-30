#ifdef __OBJC__
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import <SDWebImageHEIFCoder/SDImageHEIFCoder.h>
// libheif
#if __has_include(<SDWebImageHEIFCoder/heif.h>)
#import <SDWebImageHEIFCoder/heif.h>
#import <SDWebImageHEIFCoder/heif-version.h>
#endif
// libde265
#if __has_include(<SDWebImageHEIFCoder/de265.h>)
#import <SDWebImageHEIFCoder/de265.h>
#import <SDWebImageHEIFCoder/de265-version.h>
#endif
// libx265
#if __has_include(<SDWebImageHEIFCoder/x265.h>)
#import <SDWebImageHEIFCoder/x265.h>
#import <SDWebImageHEIFCoder/x265_config.h>
#endif

FOUNDATION_EXPORT double SDWebImageHEIFCoderVersionNumber;
FOUNDATION_EXPORT const unsigned char SDWebImageHEIFCoderVersionString[];
