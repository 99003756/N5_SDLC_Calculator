
/* Modify these two lines according to the project */
#include <99003756.c>
#include <unity.h>
#define PROJECT_NAME    "Check"

/* Prototypes for all the test functions */

char*  breaker(char *str);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_breaker);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_breaker(void) {
  TEST_ASSERT_EQUAL("$Welcome to LTTS;", add("Garbage$Welcome to LTTS;"));
  //TEST_ASSERT_EQUAL(50, add(5, 10));
}
