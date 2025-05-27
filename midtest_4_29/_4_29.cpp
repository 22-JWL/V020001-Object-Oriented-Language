#include <iostream>
#include "_4_29.h"
using namespace std;

_4_29::_4_29()
{
}

_4_29::_4_29(int radius)
{
    this->radius = radius;
}

_4_29::~_4_29()
{
}

void increase(_4_29 c)
{
    int r = c.getArea();
    c.setRadius(r + 1);
    cout << "radius = " << c.getArea() << endl;
}