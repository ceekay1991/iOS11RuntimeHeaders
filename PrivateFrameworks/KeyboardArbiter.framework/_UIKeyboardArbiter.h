/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate> {
    _UIKeyboardArbiterHandle * _activeHandle;
    NSMutableArray * _clients;
    _UIKeyboardArbiterHandle * _commandFocusHandle;
    NSString * _currentBundleIdForHardwareKeyboard;
    _UIKeyboardArbiterHandle * _disablingHandle;
    _UIKeyboardArbiterHandle * _keyboardFocusHandle;
    _UIKeyboardChangedInformation * _lastUpdate;
    NSXPCListener * _listener;
    _UIKeyboardArbiterHandle * _previouslyActiveHandle;
    NSObject<OS_dispatch_queue> * _queue;
    FBSScene * _scene;
    <_UIKeyboardArbiterLink> * _sceneLink;
    BKSApplicationStateMonitor * _stateMonitor;
    int  _updateCounter;
    FBSWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIKeyboardChangedInformation *lastUpdate;
@property (nonatomic, readonly) <_UIKeyboardArbiterLink> *sceneLink;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateClients;
- (void)attemptConnection;
- (void)checkHostingState;
- (void)completeKeyboardStatusChangedFromHandler:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleUnexpectedDeallocForHandler:(id)arg1;
- (bool)handler:(id)arg1 activateSceneLayer:(id)arg2;
- (bool)handler:(id)arg1 deactivateSceneLayer:(id)arg2;
- (id)handlerForBundleID:(id)arg1;
- (id)handlerForPID:(int)arg1;
- (void)handlerRequestedFocus:(id)arg1;
- (id)initWithLink:(id)arg1;
- (id)lastUpdate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 onConnected:(id /* block */)arg3;
- (void)processWithPID:(int)arg1 foreground:(bool)arg2 suspended:(bool)arg3;
- (void)reevaluateHardwareKeyboardClient;
- (void)reevaluateSceneSettings;
- (void)resume;
- (void)retrieveDebugInformationWithCompletion:(id /* block */)arg1;
- (void)runOperations:(id /* block */)arg1 onHandler:(id)arg2;
- (id)sceneLink;
- (void)scheduleWindowTimeout;
- (void)setKeyboardTotalDisable:(bool)arg1 withFence:(id)arg2 fromHandler:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setLastUpdate:(id)arg1;
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 fromHandler:(id)arg4;
- (void)updateInterestedBundleIDs;
- (void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2;
- (void)updateSceneSettings:(id)arg1;
- (void)updateSuppression:(bool)arg1 ofPIDs:(id)arg2;

@end