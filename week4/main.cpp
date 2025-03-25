#include <iostream>
using namespace std;

#include "Circle.h"
#include "Circle.cpp"

int main()
{
    // 객체생성
    Circle donut;
    Circle pizza(30);

    cout << "donut 면적은 " << donut.getArea() << endl;
    cout << "pizza 면적은 " << pizza.getArea() << endl;
}
// 멤버변수만 묶는게 구조체
// 멤버변수와 함수를 묶는게 클래스
// 클래스는 객체를 만들어서 사용할 수 있다.
