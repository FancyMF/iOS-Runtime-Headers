/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber * _dsid;
    bool  _enabled;
    NSString * _flag;
}

- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(bool)arg3;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
