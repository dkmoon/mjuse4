#include "gtest/gtest.h"
#include "../../cpp/cpp/feature.h"

TEST(TestCase1, mysumtest1) {
  EXPECT_EQ(mysum(1, 1), 2);
  EXPECT_EQ(mysum(1, 2), 3);
}

TEST(TestCase1, mysumtest2) {
  EXPECT_EQ(mysum(2, 2), 3);
}