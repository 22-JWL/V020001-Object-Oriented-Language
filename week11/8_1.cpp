#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void showPoint()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};
class ColorPoint : public Point
{
    string color;

public:
    void setColor(string color)
    {
        this->color = color;
    }
    void showColorPoint()
    {
        showPoint();
        cout << "color: " << color << endl;
    }
};
int main()
{
    ColorPoint cp;
    cp.set(3, 4);
    cp.setColor("Red");
    cp.showColorPoint();

    Point p;
    Point *pBase = &cp;     // (동격)
    ColorPoint *pDer = &cp; // (동격)

    pDer->set(5, 6);
    pDer->showPoint();

    pBase = &cp;  // 업캐스팅 자식이 부모집에 가는 것
    pBase = pDer; // 업캐스팅

    pDer = (ColorPoint *)&p;    // 다운캐스팅 아빠가 자식집에갈 떄는 각서쓰고들어간다
    pDer = (ColorPoint *)pBase; // 다운캐스팅
}