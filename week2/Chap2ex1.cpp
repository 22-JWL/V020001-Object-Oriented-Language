#include <iostream>
using namespace std; // std라는 이름공간을 사용하겠다. 메모리 안의 주소를 네임스페이스 라고 한다.

void area(int radius); // 함수 원형 선언

void area(int radius)
{
    cout << 3.14 * radius * radius << endl;

    // return 3.14159 * radius * radius;
}
// 원의 면적을 구하는 area() 함수, 반지름을 매개변수로 전달받는다
int main()
{                                    // cout은 std라는 이름공간에 있는 것이다.
    int a = 100;                     // int는 정수형 변수를 선언할 때 사용하는 키워드이다.
    cout << "Hello, World!" << endl; // endl은 줄바꿈을 의미한다.
    cout << "a = " << a << endl;     // <<는 출력을 의미한다.
    cout << 'A' << a << '\n';        //

    // 사용할 수 있는 영역에대해서 구역을 설정

    // 함수호출
    cout << "원의 면적은" << endl;
    area(10); // 10을 전달하고 함수를 호출한다.

    return 0; // 0을 반환하고 종료한다.
}