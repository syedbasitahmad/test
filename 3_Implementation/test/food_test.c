#include "unity.h"
/* Modify these two lines according to the project */
#include "header.h"

/* Prototypes for all the test functions */

void test_getfooddata(void);


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
  RUN_TEST(test_getfooddata);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
void test_getfooddata(void) {
  TEST_ASSERT_EQUAL(1, getfooddata());
}
