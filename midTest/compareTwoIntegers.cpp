#include "chap2.h"
#include <iostream>

compareTwoIntegers::compareTwoIntegers()
{
    // 생성자: 초기화할 내용이 있다면 여기에 추가
}
compareTwoIntegers::~compareTwoIntegers()
{
    // 소멸자: 정리해야 할 것이 있다면 여기에 추가
}
void compareTwoIntegers::compare(int a, int b)
{
    // 두 정수를 비교하여 결과 출력
    if (a > b)
    {
        std::cout << a << "는(은) " << b << "보다 큽니다." << std::endl;
    }
    else if (a < b)
    {
        std::cout << a << "는(은) " << b << "보다 작습니다." << std::endl;
    }
    else
    {
        std::cout << a << "와(과) " << b << "는(은) 같습니다." << std::endl;
    }
}