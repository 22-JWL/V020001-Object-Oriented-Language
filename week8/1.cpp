#include <iostream>
using namespace std;

void swap_values(int a, int b)
{ // 형식매개변수(형식인자)
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << ", b: " << b << endl;
}

// 보인터변수는 그 주소의 값으로 이동했다 라는 뜻
void swap_addr(int *a, int *b)
{
    int temp;
    // temp = a; // 주소값을 가져온다 하지만 타입이 안맞아서 오류뜬다
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << ", b: " << *b << endl;
}

int main()
{
    int n = 2, m = 9;
    // 값 전달기법 (call by value)
    // 캡슐화
    swap_values(n, m); //=등등 아무것도 없으니 void

    cout << "n: " << n << ", m: " << m << endl;

    // 주소전달기법 100, 200 주소값 전달. 부작용 => 원본값이 바뀌는 것, 캡슐화가 깨진다는 얘기
    swap_addr(&n, &m);
    cout << "n: " << n << ", m: " << m << endl;
}