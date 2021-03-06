/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    bool  _fetchAllChanges;
    bool  _forcePCSDecryptionAttempt;
    NSDictionary * _optionsByRecordZoneID;
    NSArray * _recordZoneIDs;
    bool  _shouldFetchAssetContents;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic) bool forcePCSDecryptionAttempt;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldFetchAssetContents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchAllChanges;
- (bool)forcePCSDecryptionAttempt;
- (id)initWithCoder:(id)arg1;
- (id)optionsByRecordZoneID;
- (id)recordZoneIDs;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setForcePCSDecryptionAttempt:(bool)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
