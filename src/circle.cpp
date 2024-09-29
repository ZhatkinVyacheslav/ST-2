// Copyright 2024 Zhatkin Vyacheslav
#include "include/circle.h"
#include <cmath>

// Константа для числа Pi
const double PI = 3.141592653589793;

Circle::Circle(double r) : radius(r) {
    calculateFerence();
    calculateArea();
}

void Circle::calculateFerence() {
    ference = 2 * PI * radius;
}

void Circle::calculateArea() {
    area = PI * radius * radius;
}

void Circle::setRadius(double r) {
    radius = r;
    calculateFerence();
    calculateArea();
}

void Circle::setFerence(double f) {
    ference = f;
    radius = f / (2 * PI);
    calculateArea();
}

void Circle::setArea(double a) {
    area = a;
    radius = std::sqrt(a / PI);
    calculateFerence();
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
