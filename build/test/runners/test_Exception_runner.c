/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_printAllNumbers(void);
extern void test_add_given_1_2_3_4_5_exptect_15(void);
extern void test_add_given_9_8_7_exptect_24(void);
extern void test_Exception_given_1_expect_David(void);
extern void test_Exception_given_minus_1_expect_ERR_OUT_OF_BOUND(void);
extern void test_Exception_given_4_expect_ERR_OUT_OF_BOUND(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_Exception.c");
  RUN_TEST(test_printAllNumbers, 75);
  RUN_TEST(test_add_given_1_2_3_4_5_exptect_15, 78);
  RUN_TEST(test_add_given_9_8_7_exptect_24, 83);
  RUN_TEST(test_Exception_given_1_expect_David, 88);
  RUN_TEST(test_Exception_given_minus_1_expect_ERR_OUT_OF_BOUND, 102);
  RUN_TEST(test_Exception_given_4_expect_ERR_OUT_OF_BOUND, 120);

  return (UnityEnd());
}
