//
//  SCRecordSessionManager.h
//  SCRecorderExamples
//
//  Created by Simon CORSIN on 15/08/14.
//
//

#import <Foundation/Foundation.h>
#import "SCRecorder.h"

@interface SCRecordSessionManager : NSObject

- (void)saveRecordSession:(SCRecordSession *)recordSession;

- (void)removeRecordSession:(SCRecordSession *)recordSession;

- (BOOL)isSaved:(SCRecordSession *)recordSession;

- (void)removeRecordSessionAtIndex:(NSInteger)index;

@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSArray *savedRecordSessions;

+ (SCRecordSessionManager *)sharedInstance;

@end
