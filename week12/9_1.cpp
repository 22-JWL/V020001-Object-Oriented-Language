#include <iostream>
using namespace std;

class Base
{
public:
    // 가상함수
    virtual void f() // 호출함수의 결정을 컴파일시가 아니라 실행시에 결정함
    {
        cout << "Base::f()" << endl;
    }
};
class Derived : public Base
{
public:
    void f()
    {
        cout << "Derived::f()" << endl;
    }
};

int main()
{
    Derived d, *pDer;
    pDer = &d; // 동격

    pDer->f(); // Derived::f() 동격상태에서는 내꺼가 나온다

    Base *pBase;
    pBase = pDer; // 상위 클래스 포인터에 하위 클래스 주소를 대입 ,업캐스팅
    pBase->f();   // Base::f() 상위 클래스 포인터로 하위 클래스의 멤버함수를 호출하면 상위 클래스의 멤버함수가 호출된다
    // Derived::f() 가상함수는 상위클래스 함수가 아니라 하위클래스 함수가 실행된다.
}