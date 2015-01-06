#import "MobileBaseDatabase.h"

#import "SqliteDatabaseConstant.h"

@class SOThumbnailInfo;


@interface MobileDBThumbnail : NSObject


#pragma mark - Base

+ (MobileDBThumbnail *)dbInstance:(NSString *)path;

- (id)initWithFile:(NSString *)filePathName;
- (void)close;

- (SOThumbnailInfo *)checkExistForThumbnailInfoWithFileInfoID:(NSString *)sqliteObjectID fileInforName:(NSString *)sqliteObjectName projectFullPath:(NSString *)fullPath;
- (void)saveThumbnailInfoWithFileInfoID:(NSString *)sqliteObjectID fileInforName:(NSString *)sqliteObjectName projectFullPath:(NSString *)fullPath;
- (void)test;
@end


