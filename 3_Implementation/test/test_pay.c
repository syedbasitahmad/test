//#include "unity_internals.h"
#include "unity.h"  
#include "payment.c"
#include "unity.c"


void setUp()
{

}

void tearDown()
{

}
void test_pay(void)
{

    TEST_ASSERT_TRUE(card_mode(1234567891234567));
}
void test_bill(void)
{
    TEST_ASSERT_EQUAL(1,get_payment(-500));
}


int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_pay);
    RUN_TEST(test_bill);


    return UNITY_END();
    return 0;
}
