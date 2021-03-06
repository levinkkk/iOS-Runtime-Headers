/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSInstallProgressList, LSObserverTimer, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {
    NSMutableSet *_inactiveInstalls;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSMutableDictionary *_installIndexes;
    NSMutableDictionary *_observers;
    NSMutableOrderedSet *_orderedInstalls;
    LSInstallProgressList *_progresses;
    BOOL _usingNetwork;
    LSObserverTimer *appsUninstalledTimer;
    LSObserverTimer *installsFinishedTimer;
    LSObserverTimer *installsStartedTimer;
    LSObserverTimer *installsUpdatedTimer;
}

- (void)addObserver:(id)arg1 withUUID:(id)arg2;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned int)arg2 andPublishingString:(id)arg3;
- (void)dealloc;
- (unsigned char)handleCancelInstallationForApp:(id)arg1;
- (id)init;
- (void)installationEndedForApplication:(id)arg1;
- (void)installationFailedForApplication:(id)arg1 reply:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned int)arg2 isActive:(BOOL)arg3;
- (void)placeholderInstalledForApp:(id)arg1;
- (void)rebuildInstallIndexes;
- (void)removeObserverWithUUID:(id)arg1;
- (void)restoreInactiveInstalls;
- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;
- (void)sendChangeNotificationForApp:(id)arg1;
- (void)sendIconUpdatedNotificationForApp:(id)arg1;
- (void)sendInstalledNotificationForApps:(id)arg1;
- (void)sendNetworkUsageChangedNotification;
- (void)sendUninstalledNotificationForApps:(id)arg1;

@end
