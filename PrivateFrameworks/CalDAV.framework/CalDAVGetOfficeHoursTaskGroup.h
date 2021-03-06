/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CoreDAVTaskGroupDelegate>, CoreDAVPropFindTask, ICSDocument, NSURL;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    ICSDocument *_calendarAvailability;
    CoreDAVPropFindTask *_fetchTask;
    NSURL *_inboxURL;
}

@property(retain) ICSDocument * calendarAvailability;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) CoreDAVPropFindTask * fetchTask;
@property(retain) NSURL * inboxURL;

- (void)_finishWithError:(id)arg1;
- (id)calendarAvailability;
- (void)dealloc;
- (id)fetchTask;
- (id)inboxURL;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setCalendarAvailability:(id)arg1;
- (void)setFetchTask:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (void)startTaskGroup;

@end
