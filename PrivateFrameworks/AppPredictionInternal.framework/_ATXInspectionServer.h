/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXInspectionServer : NSObject <NSXPCListenerDelegate, _ATXInspectionInterface> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)appHistoryAddLaunch:(id)arg1 launchReason:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(id /* block */)arg5;
- (void)appHistoryClear:(id /* block */)arg1;
- (void)appHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)appInstallHistoryClear:(id /* block */)arg1;
- (void)appInstallHistorySet:(id)arg1 date:(id)arg2 reply:(id /* block */)arg3;
- (void)appInstallHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appInstallHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)benchmarkAppPrediction:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)benchmarkAppPredictionForConsumerSubType:(unsigned char)arg1 ntimes:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)feedbackClear:(id /* block */)arg1;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 reply:(id /* block */)arg3;
- (void)getABGroups:(id /* block */)arg1;
- (void)getParseTreeForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)getPredictionModelDetails:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)predictAppsAndReturnInputsAndSubscores:(id /* block */)arg1;
- (void)predictAppsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIds:(id)arg3 reply:(id /* block */)arg4;

@end
