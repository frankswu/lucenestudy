//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/lukhnos/lucenestudy/Study.java
//

#ifndef _OrgLukhnosLucenestudyStudy_H_
#define _OrgLukhnosLucenestudyStudy_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaIoInputStream;

@interface OrgLukhnosLucenestudyStudy : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)importDataWithJavaIoInputStream:(JavaIoInputStream *)stream
                           withNSString:(NSString *)indexPath
                            withBoolean:(jboolean)withSuggestion;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

#pragma mark Package-Private

+ (void)indexWithNSString:(NSString *)sourcePath
             withNSString:(NSString *)indexPath;

+ (void)searchWithNSString:(NSString *)indexPath
              withNSString:(NSString *)query;

+ (void)showHelpAndExit;

+ (void)suggestWithNSString:(NSString *)indexPath
               withNSString:(NSString *)query;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgLukhnosLucenestudyStudy)

FOUNDATION_EXPORT void OrgLukhnosLucenestudyStudy_mainWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT void OrgLukhnosLucenestudyStudy_showHelpAndExit();

FOUNDATION_EXPORT void OrgLukhnosLucenestudyStudy_indexWithNSString_withNSString_(NSString *sourcePath, NSString *indexPath);

FOUNDATION_EXPORT jint OrgLukhnosLucenestudyStudy_importDataWithJavaIoInputStream_withNSString_withBoolean_(JavaIoInputStream *stream, NSString *indexPath, jboolean withSuggestion);

FOUNDATION_EXPORT void OrgLukhnosLucenestudyStudy_searchWithNSString_withNSString_(NSString *indexPath, NSString *query);

FOUNDATION_EXPORT void OrgLukhnosLucenestudyStudy_suggestWithNSString_withNSString_(NSString *indexPath, NSString *query);

FOUNDATION_EXPORT void OrgLukhnosLucenestudyStudy_init(OrgLukhnosLucenestudyStudy *self);

FOUNDATION_EXPORT OrgLukhnosLucenestudyStudy *new_OrgLukhnosLucenestudyStudy_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgLukhnosLucenestudyStudy)

#endif // _OrgLukhnosLucenestudyStudy_H_
