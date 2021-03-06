/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    long long  _feedType;
    <FCTagProviding> * _masterTag;
    <FCTagProviding> * _tag;
}

@property (nonatomic, readonly, copy) <FCTagProviding> *masterTag;
@property (nonatomic, copy) <FCTagProviding> *tag;

- (void).cxx_destruct;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (bool)enableNotificationsWithSubscriptionController:(id)arg1 error:(id*)arg2;
- (long long)feedFilterOptions;
- (id)feedGroupEmittersWithAppConfiguration:(id)arg1;
- (long long)feedSortMethod;
- (long long)feedType;
- (bool)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (bool)hideAccessoryText;
- (id)iAdCategories;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdKeywords;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 tag:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMutedWithSubscriptionController:(id)arg1;
- (bool)isSubscribable;
- (bool)isSubscribedToWithSubscriptionController:(id)arg1;
- (id)masterTag;
- (id)name;
- (void)setFeedType:(long long)arg1;
- (void)setTag:(id)arg1;
- (bool)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3;
- (id)tag;
- (id)theme;
- (void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2;

@end
