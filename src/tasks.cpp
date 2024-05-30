// Copyright Zhatkin Vyaceslav 2024
#include "tasks.h"
#include "circle.h"

double calculatePlanetAndRope(double _planetRad, double _radIncrement) {
    if (_radIncrement <= 0) {
        throw std::invalid_argument("Rope Increment cannot be <= 0!");
    }
    Circle circle(_planetRad);
    circle.setFerence(circle.getFerence() + _radIncrement);
    return circle.getRadius() - _planetRad;
}

double calculateSwimmingPool(double _poolRad, double _pathWidth,
    double _costOfConcrete, double _costOfFence) {
    if (_costOfConcrete <= 0 || _costOfFence <= 0) {
        throw std::invalid_argument("Costs cannot be <= 0!");
    }
    Circle pool(_poolRad);
    Circle poolWithWalkway(_poolRad + _pathWidth);

    double totalCost = ((poolWithWalkway.getArea() -
        pool.getArea()) * _costOfConcrete)
        + (poolWithWalkway.getFerence() * _costOfFence);

    return totalCost;
}
