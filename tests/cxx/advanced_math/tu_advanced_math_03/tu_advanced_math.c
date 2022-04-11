//#include <gtest/gtest.h>
//#include "advanced_math.h"
//#include "encap.h"
//#include "unity.h"
#include "mock_advanced_math.h"
#include "advanced_math_2.h"
//#include "encap.h"

//int encap(int a);
/*
int encap(int a)
{
    return ADVANCED_MATH__Example_1(a);
}
*/

void setUp(void)
{
  /* This is run before EACH TEST */
  //Counter = 0x5a5a;
}

void tearDown(void)
{
}

/*
int toto(int a)
{
    return ADVANCED_MATH__Example_1(a);
}
*/

void MAIN_TEST(void) {
    //encap(10);
    //ADVANCED_MATH__Example_1(3);
    //encap(3);
    
    //ADVANCED_MATH__Example_1_ExpectAndReturn(2,5);
    ADVANCED_MATH__Example_2_ExpectAndReturn(2,2);
    //toto(2);
    ADVANCED_MATH__Example_1(2);

    TEST_ASSERT_EQUAL(0,0);
    //return 0;
}