/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#if __has_include(<SDWebImage/SDWebImage.h>)
#import <SDWebImage/SDWebImage.h>
#else
@import SDWebImage;
#endif

NS_ASSUME_NONNULL_BEGIN

@interface SDImageWebpResult : NSObject

@property (nonatomic, strong) NSArray<UIImage *> *images;

@property (nonatomic, assign) NSTimeInterval duration;

+ (instancetype)createWithImages:(NSArray<UIImage *> *)images duration:(NSTimeInterval)duration;

@end

/**
 Built in coder that supports WebP and animated WebP
 */
@interface SDImageWebPCoder : NSObject <SDProgressiveImageCoder, SDAnimatedImageCoder>

@property (nonatomic, class, readonly, nonnull) SDImageWebPCoder *sharedCoder;

- (SDImageWebpResult *_Nullable)decodedAniImagesWithData:(NSData *)data options:(SDImageCoderOptions * _Nullable)options;

@end

NS_ASSUME_NONNULL_END
