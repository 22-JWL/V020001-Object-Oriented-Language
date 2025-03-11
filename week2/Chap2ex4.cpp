#include <iostream>
using namespace std;

class Circle
{
    // 멤버변수
    int radius;

    // 멤버함수
    double getArea()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{

    // 객체를 통해 메모리를 할당받으려면 클래스를 선언해야한다.
    Circle obj;

    char name[11];
    cout << "이름을 입력하세요";

    cin >> name;
    cout << "당신의 이름은" << name << "입니다" << endl;

    return 0;

    // 메모리할당된 대상이 객체(현실세계존재하는 모든 것), 클래스는 객체를 담고 있다
    // 변수를 보호하기위해 나온개념이 캡슐화, 객체지향
}