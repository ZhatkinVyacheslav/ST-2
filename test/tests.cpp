// Copyright 2024 Zhatkin Vyacheslav
#include <gtest/gtest.h>
#include "include/circle.h"
#include "include/tasks.h"

// Тесты для класса Circle
TEST(CircleTests, RadiusSetter) {
    Circle c(10);
    c.setRadius(20);
    EXPECT_DOUBLE_EQ(c.getRadius(), 20);
    EXPECT_DOUBLE_EQ(c.getFerence(), 2 * 3.141592653589793 * 20);
    EXPECT_DOUBLE_EQ(c.getArea(), 3.141592653589793 * 20 * 20);
}

TEST(CircleTests, FerenceSetter) {
    Circle c(10);
    c.setFerence(50);
    EXPECT_DOUBLE_EQ(c.getRadius(), 50 / (2 * 3.141592653589793));
}

TEST(CircleTests, AreaSetter) {
    Circle c(10);
    c.setArea(100);
    EXPECT_DOUBLE_EQ(c.getRadius(), std::sqrt(100 / 3.141592653589793));
}

// Тест задачи "Земля и веревка"
TEST(TaskTests, RopeAroundEarth) {
    double gap = ropeAroundEarth(6378.1, 1);
    EXPECT_NEAR(gap, 0.0001591549431, 1e-7);
}

// Тест задачи "Бассейн"
TEST(TaskTests, PoolCost) {
    double totalCost = poolCost(3, 1, 1000, 2000);
    EXPECT_DOUBLE_EQ(totalCost, 45238.9311883322);
}

// Дополнительные тесты для проверки корректности
TEST(TaskTests, PoolCostWithDifferentValues) {
    double totalCost = poolCost(5, 2, 1500, 2500);
    EXPECT_DOUBLE_EQ(totalCost, 131946.89145077132);
}

TEST(CircleTests, NegativeRadius) {
    Circle c(-5);
    EXPECT_GT(c.getRadius(), 0);
}
