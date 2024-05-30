// Copyright Zhatkin Vyacheslav 2024

#include <cstdint>
#include <cmath>
#include "circle.h"
#define PI 3.141592653589793238463

void recalculateRadius(double _rad, double* _fer, double* _ar) {
    *(_fer) = PI * _rad * 2;
    *(_ar) = PI * _rad * _rad;
}

void recalculateFerence(double* _rad, double _fer, double* _ar) {
    *(_rad) = _fer / PI / 2;
    *(_ar) = PI * *(_rad) * *(_rad);
}

void recalculateArea(double* _rad, double* _fer, double _ar) {
    *(_rad) = sqrt(_ar / PI);
    *(_fer) = PI * *(_rad) * 2;
}

Circle::Circle(double _rad) {
    if (_rad <= 0) {
        throw std::invalid_argument("Radius cannot be <= 0!");
    }
    radius = _rad;
    recalculateRadius(radius, &ference, &area);
}

void Circle::setRadius(double _rad) {
    if (_rad <= 0) {
        throw std::invalid_argument("Radius cannot be <= 0!");
    }
    radius = _rad;
    recalculateRadius(radius, &ference, &area);
}

void Circle::setFerence(double _fer) {
    if (_fer <= 0) {
        throw std::invalid_argument("Ference cannot be <= 0!");
    }
    ference = _fer;
    recalculateFerence(&radius, ference, &area);
}

void Circle::setArea(double _ar) {
    if (_ar <= 0) {
        throw std::invalid_argument("Area cannot be <= 0!");
    }
    area = _ar;
    recalculateArea(&radius, &ference, area);
}

double Circle::getRadius() {
    return radius;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getArea() {
    return area;
}
