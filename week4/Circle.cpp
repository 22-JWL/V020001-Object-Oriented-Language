// 클래스 구현부 - 함수 코드 구현
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
{
    radius = 1;
}
Circle::Circle(double r)
{
    radius = r;
}
double Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(double r)
{
    radius = r;
}
double Circle::getArea()
{
    return 3.14 * radius * radius;
}