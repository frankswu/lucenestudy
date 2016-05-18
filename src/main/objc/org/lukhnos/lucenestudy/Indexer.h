//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/lukhnos/lucenestudy/Indexer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgLukhnosLucenestudyIndexer")
#ifdef RESTRICT_OrgLukhnosLucenestudyIndexer
#define INCLUDE_ALL_OrgLukhnosLucenestudyIndexer 0
#else
#define INCLUDE_ALL_OrgLukhnosLucenestudyIndexer 1
#endif
#undef RESTRICT_OrgLukhnosLucenestudyIndexer

#if !defined (OrgLukhnosLucenestudyIndexer_) && (INCLUDE_ALL_OrgLukhnosLucenestudyIndexer || defined(INCLUDE_OrgLukhnosLucenestudyIndexer))
#define OrgLukhnosLucenestudyIndexer_

#define RESTRICT_JavaLangAutoCloseable 1
#define INCLUDE_JavaLangAutoCloseable 1
#include "java/lang/AutoCloseable.h"

@class JavaLangInteger;
@class OrgApacheLuceneAnalysisAnalyzer;
@class OrgApacheLuceneDocumentDocument;
@class OrgApacheLuceneIndexIndexWriter;
@class OrgApacheLuceneSearchQuery;
@class OrgLukhnosLucenestudyDocument;
@class OrgLukhnosPortmobileFilePath;
@protocol JavaUtilList;

@interface OrgLukhnosLucenestudyIndexer : NSObject < JavaLangAutoCloseable > {
 @public
  OrgApacheLuceneIndexIndexWriter *indexWriter_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)indexRoot;

- (instancetype)initWithNSString:(NSString *)indexRoot
                     withBoolean:(jboolean)appendIfExists;

- (void)addDocumentsWithJavaUtilList:(id<JavaUtilList>)docs;

- (void)close;

- (void)deleteDocumentsByQueryWithNSString:(NSString *)queryStr;

+ (OrgApacheLuceneAnalysisAnalyzer *)getAnalyzer;

+ (OrgApacheLuceneSearchQuery *)parseQueryWithOrgApacheLuceneAnalysisAnalyzer:(OrgApacheLuceneAnalysisAnalyzer *)analyzer
                                                                 withNSString:(NSString *)queryStr;

#pragma mark Package-Private

+ (OrgLukhnosLucenestudyDocument *)fromLuceneDocumentWithOrgApacheLuceneDocumentDocument:(OrgApacheLuceneDocumentDocument *)luceneDoc;

+ (JavaLangInteger *)getIntegerWithOrgApacheLuceneDocumentDocument:(OrgApacheLuceneDocumentDocument *)luceneDoc
                                                      withNSString:(NSString *)fieldName;

+ (OrgLukhnosPortmobileFilePath *)getMainIndexPathWithOrgLukhnosPortmobileFilePath:(OrgLukhnosPortmobileFilePath *)indexRoot;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgLukhnosLucenestudyIndexer)

J2OBJC_FIELD_SETTER(OrgLukhnosLucenestudyIndexer, indexWriter_, OrgApacheLuceneIndexIndexWriter *)

inline NSString *OrgLukhnosLucenestudyIndexer_get_TITLE_FIELD_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgLukhnosLucenestudyIndexer_TITLE_FIELD_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgLukhnosLucenestudyIndexer, TITLE_FIELD_NAME, NSString *)

inline NSString *OrgLukhnosLucenestudyIndexer_get_YEAR_FIELD_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgLukhnosLucenestudyIndexer_YEAR_FIELD_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgLukhnosLucenestudyIndexer, YEAR_FIELD_NAME, NSString *)

inline NSString *OrgLukhnosLucenestudyIndexer_get_RATING_FIELD_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgLukhnosLucenestudyIndexer_RATING_FIELD_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgLukhnosLucenestudyIndexer, RATING_FIELD_NAME, NSString *)

inline NSString *OrgLukhnosLucenestudyIndexer_get_POSITIVE_FIELD_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgLukhnosLucenestudyIndexer_POSITIVE_FIELD_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgLukhnosLucenestudyIndexer, POSITIVE_FIELD_NAME, NSString *)

inline NSString *OrgLukhnosLucenestudyIndexer_get_REVIEW_FIELD_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgLukhnosLucenestudyIndexer_REVIEW_FIELD_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgLukhnosLucenestudyIndexer, REVIEW_FIELD_NAME, NSString *)

inline NSString *OrgLukhnosLucenestudyIndexer_get_SOURCE_FIELD_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgLukhnosLucenestudyIndexer_SOURCE_FIELD_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgLukhnosLucenestudyIndexer, SOURCE_FIELD_NAME, NSString *)

inline NSString *OrgLukhnosLucenestudyIndexer_get_INDEX_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgLukhnosLucenestudyIndexer_INDEX_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgLukhnosLucenestudyIndexer, INDEX_NAME, NSString *)

FOUNDATION_EXPORT void OrgLukhnosLucenestudyIndexer_initWithNSString_(OrgLukhnosLucenestudyIndexer *self, NSString *indexRoot);

FOUNDATION_EXPORT OrgLukhnosLucenestudyIndexer *new_OrgLukhnosLucenestudyIndexer_initWithNSString_(NSString *indexRoot) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgLukhnosLucenestudyIndexer *create_OrgLukhnosLucenestudyIndexer_initWithNSString_(NSString *indexRoot);

FOUNDATION_EXPORT void OrgLukhnosLucenestudyIndexer_initWithNSString_withBoolean_(OrgLukhnosLucenestudyIndexer *self, NSString *indexRoot, jboolean appendIfExists);

FOUNDATION_EXPORT OrgLukhnosLucenestudyIndexer *new_OrgLukhnosLucenestudyIndexer_initWithNSString_withBoolean_(NSString *indexRoot, jboolean appendIfExists) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgLukhnosLucenestudyIndexer *create_OrgLukhnosLucenestudyIndexer_initWithNSString_withBoolean_(NSString *indexRoot, jboolean appendIfExists);

FOUNDATION_EXPORT OrgApacheLuceneAnalysisAnalyzer *OrgLukhnosLucenestudyIndexer_getAnalyzer();

FOUNDATION_EXPORT OrgApacheLuceneSearchQuery *OrgLukhnosLucenestudyIndexer_parseQueryWithOrgApacheLuceneAnalysisAnalyzer_withNSString_(OrgApacheLuceneAnalysisAnalyzer *analyzer, NSString *queryStr);

FOUNDATION_EXPORT JavaLangInteger *OrgLukhnosLucenestudyIndexer_getIntegerWithOrgApacheLuceneDocumentDocument_withNSString_(OrgApacheLuceneDocumentDocument *luceneDoc, NSString *fieldName);

FOUNDATION_EXPORT OrgLukhnosLucenestudyDocument *OrgLukhnosLucenestudyIndexer_fromLuceneDocumentWithOrgApacheLuceneDocumentDocument_(OrgApacheLuceneDocumentDocument *luceneDoc);

FOUNDATION_EXPORT OrgLukhnosPortmobileFilePath *OrgLukhnosLucenestudyIndexer_getMainIndexPathWithOrgLukhnosPortmobileFilePath_(OrgLukhnosPortmobileFilePath *indexRoot);

J2OBJC_TYPE_LITERAL_HEADER(OrgLukhnosLucenestudyIndexer)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgLukhnosLucenestudyIndexer")
