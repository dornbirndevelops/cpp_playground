#include <mylib.hpp>

#include <gtest/gtest.h>

TEST(MylibTest, calculateYieldsMeaningOfLife)
{
    EXPECT_EQ(42, mylib::calculate());
}
