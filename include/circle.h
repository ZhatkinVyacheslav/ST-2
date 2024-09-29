// Copyright 2024 Zhatkin Vyacheslav

#ifndef  INCLUDE_CIRCLE_H_
#define  INCLUDE_CIRCLE_H_

class Circle {
 private:
    double radius;
    double ference;  // Длина окружности
    double area;    // Площадь

    void calculateFerence();
    void calculateArea();

 public:
    // Конструктор
    explicit Circle(double r);

    // Методы установки значений
    void setRadius(double r);
    void setFerence(double f);
    void setArea(double a);

    // Методы получения значений
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};

#endif //  INCLUDE_CIRCLE_H_
