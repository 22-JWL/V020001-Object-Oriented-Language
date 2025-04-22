#include "starPiramid.h"
#include <iostream>

starPiramid::starPiramid()
{
    // 생성자: 초기화할 내용이 있다면 여기에 추가
    for (int n = 0; n < 4; n++)
    {
        for (int i = 0; i < n + 1; i++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

starPiramid::~starPiramid()
{
    // 소멸자: 정리해야 할 것이 있다면 여기에 추가
}

void starPiramid::printPyramid(int rows)
{
    // 각 행마다 별과 공백을 이용해 피라미드 형태 출력
    for (int i = 1; i <= rows; i++)
    {
        // 좌측 공백 출력: 높이가 rows일 때, i번째 줄에 (rows-i)개의 공백
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << " ";
        }
        // 별 출력: i번째 줄에 (2*i-1)개의 별
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            std::cout << "*";
        }
        // 한 줄 끝났으므로 개행 문자 출력
        std::cout << std::endl;
    }
}
