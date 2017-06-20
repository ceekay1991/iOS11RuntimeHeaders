/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableBagProfileConfig : SSBagProfileConfig {
    NSMutableDictionary * _mutableBagKeysDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *mutableBagKeysDictionary;
@property (nonatomic, copy) NSString *profile;
@property (nonatomic, copy) NSString *profileVersion;

- (void).cxx_destruct;
- (id)bagKeysDictionary;
- (id)init;
- (id)mutableBagKeysDictionary;
- (void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (void)setMutableBagKeysDictionary:(id)arg1;

@end