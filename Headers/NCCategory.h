// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from category.djinni

#import "NCExport.h"
#import <Foundation/Foundation.h>

NAVIGINE_EXPORT
@interface NCCategory : NSObject
- (nonnull instancetype)initWithId:(int32_t)id
                              name:(nonnull NSString *)name
                           imageId:(nullable NSString *)imageId;
+ (nonnull instancetype)categoryWithId:(int32_t)id
                                  name:(nonnull NSString *)name
                               imageId:(nullable NSString *)imageId;

@property (nonatomic, readonly) int32_t id;

@property (nonatomic, readonly, nonnull) NSString * name;

@property (nonatomic, readonly, nullable) NSString * imageId;

@end
