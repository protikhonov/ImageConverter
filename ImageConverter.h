//
//  ImageConverter.h
//  ARFootball
//
//  Created by Anton Tikhonov on 16.01.13.
//
//

#import <Foundation/Foundation.h>

@interface ImageConverter : NSObject

#pragma mark CGImageRef Converter

+ (unsigned char *) convertCGImageRefToBitmapRGBA8:(CGImageRef) imageRef;

+ (CGContextRef) newBitmapRGBA8ContextFromImage:(CGImageRef) image;

#pragma mark UIImage Converter

+ (unsigned char *) convertUIImageToBitmapRGBA8:(UIImage *) image;

+ (UIImage *) convertBitmapRGBA8ToUIImage:(unsigned char *) buffer  withWidth:(int) width
                               withHeight:(int) height ;


@end
