#Copyright Zhatkin Vyaceslav 2024
#include "../include/circle.h"
#include <cmath>

#define EARTH_RADIUS 6378.1

double ropeGap(double ropeLength) {
    Circle earth(EARTH_RADIUS);
    double initialArea = earth.getArea();

    earth.setRadius(earth.getRadius() + ropeLength);

    return earth.getArea() - initialArea;
}

double poolCost(double poolRadius, double roadWidth) {
    Circle pool(poolRadius);
    double roadArea = pool.getFerence() * roadWidth;
    double fenceArea = pool.getArea() - pool.getArea()
        * cos(asin(roadWidth / (2 * poolRadius)));

    return roadArea * 1000 + fenceArea * 2000;
}
