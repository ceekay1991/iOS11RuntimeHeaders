/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _installDate;
    NSDictionary * _rawUpdateDictionary;
    NSDate * _timestamp;
    long long  _updateState;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (nonatomic, readonly) NSDictionary *rawUpdateDictionary;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, readonly) NSDictionary *updateDictionary;
@property (nonatomic) long long updateState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)buyParams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)installDate;
- (long long)parentalControlsRank;
- (id)rawUpdateDictionary;
- (id)releaseDate;
- (void)setInstallDate:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUpdateState:(long long)arg1;
- (long long)storeItemIdentifier;
- (id)timestamp;
- (id)updateDictionary;
- (long long)updateState;

@end
