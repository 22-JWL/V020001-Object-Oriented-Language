#include <iostream>
using namespace std;

// 클래스 선언부
// 클래스 = 멤버변수 + 멤버함수 + 생성자 함수
// 생성자 함수 = 객체 초기화를 수행
// 클래스와 이름이 같다. 리턴타입이 없다. 객체생성 시 자동으로 호출.

// 소멸자 함수 = 객체를 메모리에서 제거할 때 호출
//  클래스와 이름이 같다. 리턴타입이 없다. ~로 시작한다.
//  객체가 소멸될 때 자동으로 호출
//  생성자 함수는 객체 생성 시 자동으로 호출되지만 소멸자 함수는 객체 소멸 시 자동으로 호출되지 않는다.

// 여러개 작성 가능, 매개변수의 수와 타입을 다르게 작성 => over
// 클래스 선언부
class Circle
{
    // 특성 -> 멤버변수, 캡슐화
    int radius;

public:
    // 행위 -> 멤버함수
    Circle();
    Circle(int r); // 생성자 함수
    ~Circle();     // 소멸자 함수

    double getArea();
};

// 클래스 구현부
Circle::Circle()
{
    radius = 1;
    cout << "반지름" << radius << "원 생성" << endl;
}
Circle::Circle(int r)
{
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}
double Circle::getArea()
{
    return 3.14 * radius * radius;
}

Circle::~Circle()
{
    cout << "반지름" << radius << "원 소멸" << endl;
}

int main()
{
    Circle pizza;
    cout << "피자의 면적은" << pizza.getArea() << endl;

    Circle donut(10);
    cout << "도넛의 면적은" << donut.getArea() << endl;

    return 0;
}