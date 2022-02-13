#include <gtest/gtest.h>
#include "advanced_math.hpp"

TEST(example,addition) {
    /* EXPECT_EQ checks the equality between 2 values. If not, moves on to the next one */
    EXPECT_EQ(ADVANCED_MATH__Factoriel(4U),24);
}

TEST(example,soustraction) {
    EXPECT_EQ(ADVANCED_MATH__PGCD(12, 6),6);
}