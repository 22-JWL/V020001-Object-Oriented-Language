// 클래스 정의부 - 조건부 컴파일 처리
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{

private:
    double radius;

public:
    Circle();
    Circle(double r);
    double getRadius();
    void setRadius(double r);
    double getArea();
    double getPerimeter();
    void print();
};

#endif