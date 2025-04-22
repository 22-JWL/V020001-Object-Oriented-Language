#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle()
    {
        radius = 1;
    }
    Circle(int r)
    {
        this->radius = r;
        cout << "나를 불렀냐" << endl;
    }
    ~Circle()
    {
        cout << "소멸자 호출" << endl;
    }
    void setRadius(int r)
    {
        radius = r;
    }
    int getRadius()
    {
        return radius;
    }
};

void increaseCircleValue(Circle c)
{
    int r = c.getRadius();
    c.setRadius(r + 1);
}

void increaseCircleValue(Circle *c)
{
    // int r = (*c).getRadius();
    //(*c).setRadius(r+1);
    int r = c->getRadius();
    c->setRadius(r + 1);
}

// 참조 전달기법 waffle의 주소값을 전달받는다
void increaseCircleRef(Circle &c)
{
    int r = c.getRadius();
    c.setRadius(r + 1);
}

int main()
{
    Circle waffle(30);
    increaseCircleValue(waffle);                      // 값 전달 기법 (call by value)
    cout << "waffle: " << waffle.getRadius() << endl; // 30

    increaseCircleValue(&waffle);                     // 주소 전달 기법 (call by address)
    cout << "waffle: " << waffle.getRadius() << endl; // 31

    increaseCircleRef(waffle);                        // 참조 전달 기법 (call by reference)
    cout << "waffle: " << waffle.getRadius() << endl; // 32
}

// 5.5 이전까지만 해라 1,2,3,4,5 2장의 인라인 안해도 됨. 1장에서 설명안한 상속 안해도 됨
// 224