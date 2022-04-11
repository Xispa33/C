#include "advanced_math_2.h"

int ADVANCED_MATH__Example_1(int a)
{
    if (a == 2) {
        int b;
        b = ADVANCED_MATH__Example_2(a);
        return b;
    } else if (a == 3) {
        int c;
        c = ADVANCED_MATH__Example_3(a, a+2);
        return c;
    }
    else {
        return 10;
    }
}