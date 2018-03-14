/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HULocationDeviceManagerObserver> {
    HFItemProvider * _devicesItemProvider;
    HFItem * _footerItem;
    HMHome * _home;
    NSSet * _itemProviders;
    HULocationDeviceManager * _locationDeviceManager;
    HFItem * _personalRequestsToggleItem;
    HFUserItem * _sourceItem;
}

@property (nonatomic, readonly) HMAssistantAccessControl *accessControl;
@property (nonatomic, readonly) NAFuture *activeLocationDeviceFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFItemProvider *devicesItemProvider;
@property (nonatomic, readonly) HFItem *footerItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (getter=isPersonalRequestsEnabled, nonatomic) bool personalRequestsEnabled;
@property (nonatomic, copy) NSArray *personalRequestsHomePods;
@property (nonatomic, readonly) HFItem *personalRequestsToggleItem;
@property (nonatomic, readonly) HFUserItem *sourceItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)_createItemProviders;
- (bool)_showPersonalRequestsItems;
- (id)accessControl;
- (id)activeLocationDeviceFuture;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)devicesItemProvider;
- (id)footerItem;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 home:(id)arg3;
- (bool)isItemPersonalRequestsDevice:(id)arg1;
- (bool)isItemPersonalRequestsFooter:(id)arg1;
- (bool)isItemPersonalRequestsToggle:(id)arg1;
- (bool)isPersonalRequestsEnabled;
- (id)itemProviders;
- (id)locationDeviceManager;
- (void)locationDeviceManager:(id)arg1 didUpdateActiveLocationDevice:(id)arg2;
- (unsigned long long)personalRequestsAuthenticationRequirement;
- (id)personalRequestsHomePods;
- (id)personalRequestsToggleItem;
- (void)registerForExternalUpdates;
- (void)setPersonalRequestsEnabled:(bool)arg1;
- (void)setPersonalRequestsHomePods:(id)arg1;
- (id)sourceItem;
- (void)toggleAllPersonalRequestsDevices;
- (void)unregisterForExternalUpdates;
- (id)updateLocationDeviceToThisDevice;

@end