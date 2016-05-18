//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/test/java/org/lukhnos/lucenestudy/SuggesterTest.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "java/io/IOException.h"
#include "java/io/PrintStream.h"
#include "java/lang/Exception.h"
#include "java/lang/System.h"
#include "java/util/Arrays.h"
#include "java/util/List.h"
#include "org/junit/After.h"
#include "org/junit/Before.h"
#include "org/junit/Test.h"
#include "org/lukhnos/lucenestudy/Document.h"
#include "org/lukhnos/lucenestudy/Indexer.h"
#include "org/lukhnos/lucenestudy/Suggester.h"
#include "org/lukhnos/lucenestudy/SuggesterTest.h"
#include "org/lukhnos/lucenestudy/Util.h"
#include "org/lukhnos/portmobile/file/Files.h"
#include "org/lukhnos/portmobile/file/Path.h"

@implementation OrgLukhnosLucenestudySuggesterTest

- (void)setUp {
  temp_ = OrgLukhnosPortmobileFileFiles_createTempDirectoryWithNSString_([OrgLukhnosLucenestudySuggesterTest_class_() getCanonicalName]);
}

- (void)tearDown {
  OrgLukhnosLucenestudyUtil_deletePathWithOrgLukhnosPortmobileFilePath_(temp_);
}

- (void)basicTest {
  OrgLukhnosLucenestudyIndexer *indexer = new_OrgLukhnosLucenestudyIndexer_initWithNSString_([((OrgLukhnosPortmobileFilePath *) nil_chk(temp_)) description]);
  IOSObjectArray *docs = [IOSObjectArray newArrayWithObjects:(id[]){ new_OrgLukhnosLucenestudyDocument_initWithNSString_withInt_withInt_withBoolean_withNSString_withNSString_(@"test", 2000, 5, false, @"", @""), new_OrgLukhnosLucenestudyDocument_initWithNSString_withInt_withInt_withBoolean_withNSString_withNSString_(@"testing", 2000, 0, false, @"", @""), new_OrgLukhnosLucenestudyDocument_initWithNSString_withInt_withInt_withBoolean_withNSString_withNSString_(@"tested", 2000, 0, false, @"", @"") } count:3 type:OrgLukhnosLucenestudyDocument_class_()];
  [indexer addDocumentsWithJavaUtilList:JavaUtilArrays_asListWithNSObjectArray_(docs)];
  [indexer close];
  OrgLukhnosLucenestudySuggester_rebuildWithNSString_([temp_ description]);
  OrgLukhnosLucenestudySuggester *suggester = new_OrgLukhnosLucenestudySuggester_initWithNSString_([temp_ description]);
  id<JavaUtilList> results = [suggester suggestWithNSString:@"tes"];
  [((JavaIoPrintStream *) nil_chk(JreLoadStatic(JavaLangSystem, out_))) printlnWithId:results];
  [suggester close];
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgLukhnosLucenestudySuggesterTest_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (IOSObjectArray *)__annotations_setUp {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[OrgJunitBefore alloc] init] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (IOSObjectArray *)__annotations_tearDown {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[OrgJunitAfter alloc] init] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (IOSObjectArray *)__annotations_basicTest {
  return [IOSObjectArray arrayWithObjects:(id[]) { [[OrgJunitTest alloc] initWithExpected:OrgJunitTest_None_class_() withTimeout:0] } count:1 type:JavaLangAnnotationAnnotation_class_()];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "setUp", NULL, "V", 0x1, "Ljava.io.IOException;", NULL },
    { "tearDown", NULL, "V", 0x1, "Ljava.io.IOException;", NULL },
    { "basicTest", NULL, "V", 0x1, "Ljava.lang.Exception;", NULL },
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "temp_", NULL, 0x0, "Lorg.lukhnos.portmobile.file.Path;", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _OrgLukhnosLucenestudySuggesterTest = { 2, "SuggesterTest", "org.lukhnos.lucenestudy", NULL, 0x1, 4, methods, 1, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_OrgLukhnosLucenestudySuggesterTest;
}

@end

void OrgLukhnosLucenestudySuggesterTest_init(OrgLukhnosLucenestudySuggesterTest *self) {
  (void) NSObject_init(self);
}

OrgLukhnosLucenestudySuggesterTest *new_OrgLukhnosLucenestudySuggesterTest_init() {
  OrgLukhnosLucenestudySuggesterTest *self = [OrgLukhnosLucenestudySuggesterTest alloc];
  OrgLukhnosLucenestudySuggesterTest_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgLukhnosLucenestudySuggesterTest)
