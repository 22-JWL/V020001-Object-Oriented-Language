#include <iostream>

using namespace std;
// 다형성
// 함수 오버로딩 , 연산자 오버로딩, 오버라이딩,

class Power
{
    int kick;
    int punch;

public:
    Power(int kick = 0, int punch = 0)
    {
        this->kick = kick;
        this->punch = punch;
    }
    void show();
    // 연산자 중복 함수
    Power operator+(Power op2);
    Power operator+=(Power op2);
};
void Power::show()
{
    cout << "kick: " << kick << ", punch: " << punch << endl;
}
Power Power::operator+(Power op2)
{
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp; // 연산자 오버로딩
}

Power Power::operator+=(Power op2)
{
    this->kick += op2.kick;
    this->punch += op2.punch;
    return *this; // 연산자 오버로딩
}
int main()
{
    Power a(3, 5), b(4, 6), c;
    c.show();

    c = a + b; // 연산자 오버로딩
    c.show();

    c = a += b; // 연산자 오버로딩
}