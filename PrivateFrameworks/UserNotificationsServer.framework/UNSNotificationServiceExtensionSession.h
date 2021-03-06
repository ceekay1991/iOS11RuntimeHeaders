/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationServiceExtensionSession : NSObject {
    unsigned long long  _allowedTimers;
    <UNSNotificationServiceExtensionSessionDelegate> * _delegate;
    BSTimer * _errorWatchdogTimer;
    NSExtensionContext * _extensionContext;
    NSError * _extensionError;
    NSString * _extensionIdentifier;
    BSTimer * _graceWatchdogTimer;
    id /* block */  _notificationModificationCompletionHander;
    UNNotificationContent * _notificationModificationModifiedContent;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _sessionUUID;
    unsigned long long  _state;
}

@property (nonatomic) <UNSNotificationServiceExtensionSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) NSUUID *sessionUUID;

+ (id)sessionWithExtension:(id)arg1 sessionUUID:(id)arg2 queue:(id)arg3 serviceTime:(double)arg4 graceTime:(double)arg5;

- (void).cxx_destruct;
- (id)_initWithExtensionIdentifier:(id)arg1 extensionContext:(id)arg2 sessionUUID:(id)arg3 queue:(id)arg4 serviceTime:(double)arg5 graceTime:(double)arg6 allowedTimers:(unsigned long long)arg7;
- (void)_queue_cancelWithError:(id)arg1;
- (void)_queue_complete;
- (void)_queue_didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_queue_serviceExtensionTimeWillExpire;
- (void)cancelWithError:(id)arg1;
- (void)complete;
- (id)delegate;
- (void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)sessionUUID;
- (void)setDelegate:(id)arg1;

@end
