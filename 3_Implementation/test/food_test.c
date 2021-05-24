#include "unity.h"
/* Modify these two lines according to the project */
#include "header.h"
#define PROJECT_NAME    "Food ordering"

/* Prototypes for all the test functions */

void test_getfooddata(void);
void test_display_file(void);

/* Test Plans for Main file */

void test_close(void);
void test_customer(void);

/*Test plans for food ordering */

void test_vegetarian(void);
void test_non_vegeterian(void);

/*Test plans for admin section*/
void test_foodlist(void);
void test_total_cash(void);
void test_viewcardpay(void);


void test_display_file(void);

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
  RUN_TEST(test_display_file);
  RUN_TEST(test_foodlist);
  RUN_TEST(test_total_cash);
  RUN_TEST(test_viewcardpay);
  
/* Run Test functions */
  RUN_TEST(test_close);
  RUN_TEST(test_customer);
  
/* Run test function for ordering */
  RUN_TEST(test_vegetarian);
  RUN_TEST(test_non_vegetarian);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
void test_getfooddata(void) {
  TEST_ASSERT_EQUAL(1, getfooddata());
}

void test_display_file(void){
  TEST_ASSERT_EQUAL(0, display_file("order.txt"));
}

/* Test function for main file */

void test_close(void) {
  TEST_ASSERT_EQUAL(1, close());
}

void test_customer(void) {
  TEST_ASSERT_EQUAL(1, customer());
}


/*Test function for food ordering */

void test_vegetarian(void) {
  TEST_ASSERT_EQUAL(1, vegetarian());
}

void test_non_vegetarian(void) {
  TEST_ASSERT_EQUAL(1, non_vegetarian());
}

/*Test functions for admin section*/

void test_foodlist(void){
  TEST_ASSERT_EQUAL(1, foodlist());
}

void test_total_cash(void){
  TEST_ASSERT_EQUAL(1, totalcash());
}

void test_viewcardpay(void){
  TEST_ASSERT_EQUAL(1, viewcardpay());
}
  