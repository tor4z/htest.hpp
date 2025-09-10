#define HTEST_DEFINE_MAIN
#include "htest.hpp"


HT_CASE(Matrix, to_failed)
{
    HT_ASSERT_TRUE(1 == 2);
    HT_ASSERT_NE(1, 1);
    HT_ASSERT_NEAR(2.0, 1.0, 0.002);
}
