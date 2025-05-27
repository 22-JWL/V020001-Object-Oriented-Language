#include <iostream>
#include "_4_29.h"
#include "_4_29.cpp"
using namespace std;

int main()
{
    _4_29 waffle;
    waffle.setRadius(10);
    increase(waffle);
    cout << "radius = " << waffle.getArea() << endl;
}