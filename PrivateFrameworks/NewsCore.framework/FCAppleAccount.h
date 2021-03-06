/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppleAccount : NSObject <FCAppleAccount> {
    NSString * _DSID;
    NSString * _contentStoreFrontID;
    bool  _iCloudAccountChanged;
    NSString * _overrideContentStoreFrontID;
    bool  _runningPPT;
    NSString * _userStoreFrontID;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, copy) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *endpointConnectionClientID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iCloudAccountChanged;
@property (nonatomic, readonly) bool isContentStoreFrontSupported;
@property (nonatomic, copy) NSString *overrideContentStoreFrontID;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) bool privateDataSyncingEnabled;
@property (getter=isRunningPPT) bool runningPPT;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (getter=isUserSignedInToiCloud, nonatomic, readonly) bool userSignedInToiCloud;
@property (nonatomic, copy) NSString *userStoreFrontID;

+ (void)enableStoreFrontLocking;
+ (id)sharedAccount;

- (void).cxx_destruct;
- (id)DSID;
- (void)_loadStoreFrontIfNeededWithCallbackAndAccessQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)_refreshUbiquityIdentityToken;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(bool)arg1;
- (void)checkAlliOSDevicesRunningMajorOSVersionOrLater:(long long)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)contentStoreFrontID;
- (id)currentStoreFrontID;
- (id)endpointConnectionClientID;
- (bool)iCloudAccountChanged;
- (id)iTunesAccountDSID;
- (id)iTunesAccountName;
- (id)init;
- (bool)isContentStoreFrontSupported;
- (bool)isPrimaryAccountEmailAddress;
- (bool)isPrivateDataSyncingEnabled;
- (bool)isRunningPPT;
- (bool)isUserSignedInToiCloud;
- (bool)isUserSignedIntoiTunes;
- (void)loadStoreFrontIfNeeded;
- (void)loadStoreFrontIfNeededWithCompletion:(id /* block */)arg1;
- (id)overrideContentStoreFrontID;
- (void)setContentStoreFrontID:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setICloudAccountChanged:(bool)arg1;
- (void)setOverrideContentStoreFrontID:(id)arg1;
- (void)setRunningPPT:(bool)arg1;
- (void)setUserStoreFrontID:(id)arg1;
- (id)supportedContentStoreFrontID;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)t_stopOverridingContentStoreFrontID;
- (id)userStoreFrontID;

@end
