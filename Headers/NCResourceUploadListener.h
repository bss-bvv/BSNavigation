// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from resource_upload_listener.djinni

#import "NCExport.h"
#import <Foundation/Foundation.h>


NAVIGINE_EXPORT
@protocol NCResourceUploadListener <NSObject>

- (void)onUploaded;

- (void)onFailed:(nullable NSError *)error;

@end