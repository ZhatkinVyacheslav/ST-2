// Copyright 2024 Zhatkin Vyacheslav
#include "include/tasks.h"
#include "include/circle.h"

// Решение задачи "Земля и веревка"
double ropeAroundEarth(double earthRadius, double addedLength) {
    Circle earth(earthRadius);
    double newFerence = earth.getFerence() + addedLength;
    earth.setFerence(newFerence);
    return earth.getRadius() - earthRadius;
}

// Решение задачи "Бассейн"
double poolCost(double poolRadius, double trackWidth,
    double costPerSquareMeter, double costPerMeterFence) {
    Circle pool(poolRadius);
    Circle total(poolRadius + trackWidth);

    double trackArea = total.getArea() - pool.getArea();
    double fenceLength = total.getFerence();

    double trackCost = trackArea * costPerSquareMeter;
    double fenceCost = fenceLength * costPerMeterFence;

    return trackCost + fenceCost;
}
