#include "advanced_math.h"

int ADVANCED_MATH__Factoriel(const int n) {
    return n;
}

int ADVANCED_MATH__PGCD(const int x1, const int x2) {
    if (x1%x2 == 0) {
        return x2;
    } else {
        return ADVANCED_MATH__PGCD(x2,x1%x2);
    }
}

int ADVANCED_MATH__Example_2(int a)
{
    return a;
}

int ADVANCED_MATH__Example_3(int a, int b)
{
    return a+b;
}