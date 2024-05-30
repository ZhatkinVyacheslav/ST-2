// Copyright Zhatkin Vyacheslav 2024

#include <gtest / gtest.h>
#include <cstdint>
#include "tasks.h"
#include "circle.h"
#define PI 3.141592653589793238463


TEST(Circle, checkCreationWorks) {
    EXPECT_NO_THROW(Circle(1.0));
}

TEST(Circle, checkZeroRadius) {
    EXPECT_ANY_THROW(Circle(0.0));
}

TEST(Circle, checkNegativeRadius) {
    EXPECT_ANY_THROW(Circle(-1.0));
}

TEST(Circle, checkArea) {
    Circle circle(1.0);

    EXPECT_NEAR(circle.getArea(), PI, 0.01);
}

TEST(Circle, checkFerence) {
    Circle circle(1.0);

    EXPECT_NEAR(circle.getFerence(), 6.283, 0.01);
}

TEST(Circle, checkCannotSetNegativeArea) {
    Circle circle(1.0);

    EXPECT_ANY_THROW(circle.setArea(-1.0));
}

TEST(Circle, checkCannotSetNegativeFerence) {
    Circle circle(1.0);

    EXPECT_ANY_THROW(circle.setFerence(-1.0));
}

TEST(Circle, checkCannotSetNegativeRadius) {
    Circle circle(1.0);

    EXPECT_ANY_THROW(circle.setRadius(-1.0));
}

TEST(Circle, checkCannotSetZeroArea) {
    Circle circle(1.0);

    EXPECT_ANY_THROW(circle.setArea(0.0));
}

TEST(Circle, checkCannotSetZeroFerence) {
    Circle circle(1.0);

    EXPECT_ANY_THROW(circle.setFerence(0.0));
}

TEST(Circle, checkCannotSetZeroRadius) {
    Circle circle(1.0);

    EXPECT_ANY_THROW(circle.setRadius(0.0));
}

TEST(Circle, checkWorksWithLargeRadius) {
    Circle circle(100.0);

    EXPECT_NEAR(circle.getArea(), 31415.926, 0.01);
    EXPECT_NEAR(circle.getFerence(), 628.318, 0.01);
}

TEST(Circle, checkWorksWithLargeArea) {
    Circle circle(1.0);
    circle.setArea(31415.0);

    EXPECT_NEAR(circle.getRadius(), 100.0, 0.01);
    EXPECT_NEAR(circle.getFerence(), 628.3, 0.01);
}

TEST(Circle, checkWorksWithLargeFerence) {
    Circle circle(1.0);
    circle.setFerence(1000);

    EXPECT_NEAR(circle.getArea(), 79577.4669, 0.01);
    EXPECT_NEAR(circle.getRadius(), 159.1549, 0.01);
}

TEST(Tasks, checkRopeWorks) {
    double planetRad = 1, ropeIncrement = 2;

    EXPECT_NO_THROW(calculatePlanetAndRope(planetRad, ropeIncrement));
}

TEST(Tasks, checkRopeWrongInput) {
    double planetRad = -1, ropeIncrement = 2;

    EXPECT_ANY_THROW(calculatePlanetAndRope(planetRad, ropeIncrement));
}

TEST(Tasks, checkSwimmingPoolWorks) {
    double poolRad = 1, pathWidth = 2, costOfConcrete = 3, costOfFence = 4;

    EXPECT_NO_THROW(calculateSwimmingPool(poolRad, pathWidth,
        costOfConcrete, costOfFence));
}

TEST(Tasks, checkSwimmingPoolWrongInput) {
    double poolRad = -1, pathWidth = 2, costOfConcrete = 3, costOfFence = 4;

    EXPECT_ANY_THROW(calculateSwimmingPool(poolRad, pathWidth,
        costOfConcrete, costOfFence));
}

TEST(Tasks, checkSwimmingPoolWorksWithData) {
    double poolRad = 3, pathWidth = 1,
        costOfConcrete = 1000, costOfFence = 2000;

    EXPECT_NEAR(calculateSwimmingPool(poolRad, pathWidth,
        costOfConcrete, costOfFence), 23000 * PI, 0.01);
}

TEST(Tasks, checkRopeWorksWithData) {
    double planetRad = 6378.1, ropeIncrement = 0.01;

    EXPECT_NEAR(calculatePlanetAndRope(planetRad, ropeIncrement),
        0.001592, 0.01);
}