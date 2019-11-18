#include <gtest/gtest.h>
#include "calc.hpp"

TEST(Tests, add)
{
    Calc c;
    ASSERT_EQ(3, c.add(1, 2));
}