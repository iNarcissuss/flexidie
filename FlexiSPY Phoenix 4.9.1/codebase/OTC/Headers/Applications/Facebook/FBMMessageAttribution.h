/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "FBValueObject.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface FBMMessageAttribution : NSObject //FBValueObject <NSCopying, NSCoding>
{
    NSString *_attributedAppFBID;
    NSString *_attributedAppName;
    NSString *_iTunesStoreId;
    NSURL *_appIconURL;
    NSString *_attributedAppMetadata;
    unsigned int _attributionVisibility;
    NSDictionary *_otherUserAppScopedIds;
}

@property(readonly, copy, nonatomic) NSDictionary *otherUserAppScopedIds; // @synthesize otherUserAppScopedIds=_otherUserAppScopedIds;
@property(readonly, nonatomic) unsigned int attributionVisibility; // @synthesize attributionVisibility=_attributionVisibility;
@property(readonly, copy, nonatomic) NSString *attributedAppMetadata; // @synthesize attributedAppMetadata=_attributedAppMetadata;
@property(readonly, copy, nonatomic) NSURL *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(readonly, copy, nonatomic) NSString *iTunesStoreId; // @synthesize iTunesStoreId=_iTunesStoreId;
@property(readonly, copy, nonatomic) NSString *attributedAppName; // @synthesize attributedAppName=_attributedAppName;
@property(readonly, copy, nonatomic) NSString *attributedAppFBID; // @synthesize attributedAppFBID=_attributedAppFBID;
//- (void).cxx_destruct;
- (id)initWithAttributedAppFBID:(id)arg1 attributedAppName:(id)arg2 iTunesStoreId:(id)arg3 appIconURL:(id)arg4 attributedAppMetadata:(id)arg5 attributionVisibility:(unsigned int)arg6 otherUserAppScopedIds:(id)arg7;

@end
