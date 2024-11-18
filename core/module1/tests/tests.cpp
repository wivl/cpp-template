#include <gtest/gtest.h>
#include <module1/header.hpp>

TEST(Module1, sum) {
    EXPECT_EQ(module1::sum(1, 1), 2);
}
