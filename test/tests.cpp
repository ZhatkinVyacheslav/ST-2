// Copyright Zhatkin Vyacheslav 2024
#include <gtest/gtest.h>
#include <cstdint>
#include "circle.h"
#include "tasks.h"

TEST(CircleTest, Constructor) {
    EXPECT_NO_THROW(Circle a(5));
    Circle c(5)
    EXPECT_DOUBLE_EQ(c.getRadius(), 5);
    EXPECT_DOUBLE_EQ(c.getFerence(), 31.41592653589793);
    EXPECT_DOUBLE_EQ(c.getArea(), 78.53981633974483);
}

TEST(CircleTest, SetRadius) {
    Circle c(5);
    c.setRadius(10);
    EXPECT_DOUBLE_EQ(c.getRadius(), 10);
    EXPECT_DOUBLE_EQ(c.getFerence(), 62.83185307179586);
    EXPECT_DOUBLE_EQ(c.getArea(), 314.1592653589793);
}

TEST(CircleTest, SetFerence) {
    Circle c(5);
    c.setFerence(31.41592653589793);
    EXPECT_DOUBLE_EQ(c.getRadius(), 5);
    EXPECT_DOUBLE_EQ(c.getFerence(), 31.41592653589793);
    EXPECT_DOUBLE_EQ(c.getArea(), 78.53981633974483);
}

TEST(CircleTest, SetArea) {
    Circle c(5);
    c.setArea(78.53981633974483);
    EXPECT_DOUBLE_EQ(c.getRadius(), 5);
    EXPECT_DOUBLE_EQ(c.getFerence(), 31.41592653589793);
    EXPECT_DOUBLE_EQ(c.getArea(), 78.53981633974483);
}

TEST(TasksTest, RopeGap) {
    double ropeLength = 1;
    double expectedGap = 0.0000003141592653589793;
    EXPECT_NEAR(ropeGap(ropeLength), expectedGap, 1e-10);
}

TEST(TasksTest, PoolCost) {
    double poolRadius = 3;
    double roadWidth = 1;
    double expectedCost = 113140.6559265359;
    EXPECT_NEAR(poolCost(poolRadius, roadWidth), expectedCost, 1e-2);
}

TEST(TasksTest, RopeGap_AdditionalTest1) {
    double ropeLength = 0.5;
    double expectedGap = 0.0000001570796326794897; // Округление до семи знаков после запятой
    EXPECT_NEAR(ropeGap(ropeLength), expectedGap, 1e-7);
}

TEST(TasksTest, RopeGap_AdditionalTest2) {
    double ropeLength = 2;
    double expectedGap = 0.0000006283185307179586; // Округление до семи знаков после запятой
    EXPECT_NEAR(ropeGap(ropeLength), expectedGap, 1e-7);
}

TEST(TasksTest, PoolCost_AdditionalTest1) {
    double poolRadius = 5;
    double roadWidth = 2;
    double expectedCost = 262813.1185307179; // Округление до двух знаков после запятой
    EXPECT_NEAR(poolCost(poolRadius, roadWidth), expectedCost, 0.01);
}

TEST(TasksTest, PoolCost_AdditionalTest2) {
    double poolRadius = 10;
    double roadWidth = 3;
    double expectedCost = 449244.6492485928; // Округление до двух знаков после запятой
    EXPECT_NEAR(poolCost(poolRadius, roadWidth), expectedCost, 0.01);
}

TEST(TasksTest, PoolCost_AdditionalTest3) {
    double poolRadius = 0.5;
    double roadWidth = 0.1;
    double expectedCost = 78.53981633974483; // Округление до двух знаков после запятой
    EXPECT_NEAR(poolCost(poolRadius, roadWidth), expectedCost, 0.01);
}
