/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {
    <TUCallServicesClientCapabilitiesActions> * _delegate;
    bool  _wantsCallDisconnectionOnInvalidation;
    bool  _wantsFrequencyChangeNotifications;
}

@property (nonatomic) <TUCallServicesClientCapabilitiesActions> *delegate;
@property (nonatomic) bool wantsCallDisconnectionOnInvalidation;
@property (nonatomic) bool wantsFrequencyChangeNotifications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;
- (void)setDelegate:(id)arg1;
- (void)setWantsCallDisconnectionOnInvalidation:(bool)arg1;
- (void)setWantsFrequencyChangeNotifications:(bool)arg1;
- (bool)wantsCallDisconnectionOnInvalidation;
- (bool)wantsFrequencyChangeNotifications;

@end