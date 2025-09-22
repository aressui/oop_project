#include <gtest/gtest.h>
#include "../include/solution.h"

TEST(LargestDivisorTest, BasicTest) {
    EXPECT_EQ(largest_divisor(12, 18), 6);
    EXPECT_EQ(largest_divisor(18, 12), 6);
}

TEST(LargestDivisorTest, EqualNumbers) {
    EXPECT_EQ(largest_divisor(15, 15), 15);
    EXPECT_EQ(largest_divisor(1, 1), 1);
    EXPECT_EQ(largest_divisor(100, 100), 100);
}

TEST(LargestDivisorTest, PrimeNumbers) {
    EXPECT_EQ(largest_divisor(13, 17), 1);
    EXPECT_EQ(largest_divisor(2, 3), 1);
}

TEST(LargestDivisorTest, OneIsOne) {
    EXPECT_EQ(largest_divisor(1, 1), 1);
    EXPECT_EQ(largest_divisor(1, 999999), 1);
}

TEST(LargestDivisorTest, ZeroCases) {
    EXPECT_EQ(largest_divisor(0, 5), 5);
    EXPECT_EQ(largest_divisor(10, 0), 10);
    EXPECT_EQ(largest_divisor(0, 0), 0);
}

TEST(LargestDivisorTest, NegativeNumbers) {
    EXPECT_EQ(largest_divisor(-12, 18), 6);
    EXPECT_EQ(largest_divisor(12, -18), 6);
    EXPECT_EQ(largest_divisor(-12, -18), 6);
}

TEST(LargestDivisorTest, LargeNumbers) {
    EXPECT_EQ(largest_divisor(1000000, 1000000), 1000000);
    EXPECT_EQ(largest_divisor(123456, 654321), 3);
}

TEST(LargestDivisorTest, PowersOfTwo) {
    EXPECT_EQ(largest_divisor(16, 32), 16);
    EXPECT_EQ(largest_divisor(8, 64), 8);
    EXPECT_EQ(largest_divisor(4, 128), 4);
}

TEST(LargestDivisorTest, Multiples) {
    EXPECT_EQ(largest_divisor(6, 18), 6);
    EXPECT_EQ(largest_divisor(18, 6), 6);
    EXPECT_EQ(largest_divisor(25, 100), 25);
    EXPECT_EQ(largest_divisor(100, 25), 25);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}