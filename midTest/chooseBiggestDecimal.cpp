#include "chap2.h"
#include <iostream>

chooseBiggestDecimal::chooseBiggestDecimal()
{
    // 생성자: 초기화할 내용이 있다면 여기에 추가
}
chooseBiggestDecimal::~chooseBiggestDecimal()
{
    // 소멸자: 정리해야 할 것이 있다면 여기에 추가
}
void chooseBiggestDecimal::compare(float a, float b, float c, float d, float e)
{
    // 다섯 개의 실수를 비교하여 가장 큰 수를 출력
    float max = a; // 초기값으로 첫 번째 수를 설정

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    if (e > max)
        max = e;

    std::cout << "가장 큰 수는: " << max << std::endl;
}
