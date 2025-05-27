#ifndef _4_29_H
#define _4_29_H

class _4_29
{
private:
    int radius;

public:
    _4_29() { radius = 1; };
    ~_4_29();
    _4_29(int radius);
    void setRadius(int radius) { this->radius = radius; };

    double getArea()
    {
        return 3.14 * radius * radius;
    };
};

#endif // _4_29_H