// Copyright Zhatkin Vyacheslav 2024
#include "circle.h"
#include <cmath>
#include <cstdint>

Circle::Circle(double radius) {
    setRadius(radius);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    ference = 2 * 3.14159265358979323846 * radius;
    area = 3.14159265358979323846 * radius * radius;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    radius = ference / (2 * 3.14159265358979323846);
    area = 3.14159265358979323846 * radius * radius;
}

void Circle::setArea(double area) {
    this->area = area;
    radius = sqrt(area / 3.14159265358979323846);
    ference = 2 * 3.14159265358979323846 * radius;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getArea() const {
    return area;
}
