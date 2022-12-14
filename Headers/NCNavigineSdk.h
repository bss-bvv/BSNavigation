// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from navigine_sdk.djinni

#import "NCExport.h"
#import <Foundation/Foundation.h>
@class NCAsyncRouteManager;
@class NCLocationEditManager;
@class NCLocationListManager;
@class NCLocationManager;
@class NCMeasurementManager;
@class NCNavigationManager;
@class NCNavigineSdk;
@class NCNotificationManager;
@class NCResourceManager;
@class NCRouteManager;
@class NCZoneManager;


NAVIGINE_EXPORT
@interface NCNavigineSdk : NSObject

+ (void)setUserHash:(nonnull NSString *)userHash;

+ (void)setServer:(nonnull NSString *)server;

+ (nullable NCNavigineSdk *)getInstance;

+ (nonnull NSString *)getVersion;

+ (nonnull NSString *)getDeviceId;

+ (int64_t)getRelativeTime;

- (nullable NCLocationManager *)getLocationManager;

- (nullable NCNavigationManager *)getNavigationManager:(nullable NCLocationManager *)locationManager;

- (nullable NCZoneManager *)getZoneManager:(nullable NCLocationManager *)locationManager
                         navigationManager:(nullable NCNavigationManager *)navigationManager;

- (nullable NCRouteManager *)getRouteManager:(nullable NCLocationManager *)locationManager
                           navigationManager:(nullable NCNavigationManager *)navigationManager;

- (nullable NCAsyncRouteManager *)getAsyncRouteManager:(nullable NCLocationManager *)locationManager
                                     navigationManager:(nullable NCNavigationManager *)navigationManager;

- (nullable NCResourceManager *)getResourceManager:(nullable NCLocationManager *)locationManager;

- (nullable NCNotificationManager *)getNotificationManager:(nullable NCLocationManager *)locationManager;

- (nullable NCLocationEditManager *)getLocationEditManager:(nullable NCLocationManager *)locationManager;

- (nullable NCMeasurementManager *)getMeasurementManager:(nullable NCLocationManager *)locationManager;

- (nonnull NSString *)getErrorDescription:(int32_t)errorCode;

- (nullable NCLocationListManager *)getLocationListManager;

@end
