// Copyright Zhatkin Vyacheslav 2024

#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>
#include <stdexcept>

class Circle {
private:
    double radius;
    double ference;
    double area;
public:
    explicit Circle(double _r);

    void setRadius(double _rad);
    void setFerence(double _fer);
    void setArea(double _ar);
    double getRadius();
    double getFerence();
    double getArea();
};


#endif  // INCLUDE_CIRCLE_H_