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
        radius = 1;
        cout << "반지름" << radius << "인 생성자 호출" << endl;
    }
    ~Circle() { cout << "반지름" << radius << "인 소멸자 호출" << endl; }
    Circle(int radius);

    double getArea();
};

void Circle::setRadius(int radius)
{
    // radius = radius; 제 3의 객체의 radius를 가리킴
    // this->radius = radius; Circle의 radius를 가리킴
    // 귀찮으면 똑같이 변수 만들지 마
    this->radius = radius;
}

Circle::Circle(int radius)
{
    this->radius = radius;
    cout << "반지름" << radius << "인 생성자 호출" << endl;
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

    for (int i = 0; i < n; i++)
    {
        cout << "원" << i + 1 << "번원";
        cin >> radius;
        pArray[i].setRadius(radius);
        // (pArray + i)->setRadius(radius);
    }

    Circle *p = pArray;
    for (int i = 0; i < n; i++)
    {
        cout << p->getArea() << endl;

        // 주소값을 증가시키는 것
        p++;
    }

    delete[] pArray;
}
