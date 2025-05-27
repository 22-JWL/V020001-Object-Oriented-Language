#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;

public:
    void setRadius(int radius);
    Circle()
    {
        cout << "반지름" << radius << "인 생성자 호출" << endl;
    }
    ~Circle()
    {
        cout << "반지름" << radius << "인 소멸자 호출" << endl;
    }
    Circle(int radius);
    double getArea();
};

void Circle::setRadius(int radius)
{
    this->radius = radius;
}

Circle::Circle(int radius)
{
    this->radius = radius;
    cout << " 반지름" << radius << "인 생성자 호출" << endl;
}
double Circle::getArea()
{
    return 3.14 * radius * radius;
}
int main()
{
    // 현재 radius는 각각의 함수마다 다르게 사용됨
    int n, radius;
    cout << "생성 원의 개수 입력: ";
    cin >> n;

    // 동적할당
    Circle *pArray = new Circle[n];

    delete[] pArray;
}
