#include <iostream>
#include "starPiramid.h"
#include "starPiramid.cpp"

int main()
{
    starPiramid sp; // starPiramid 클래스 인스턴스 생성

    int rows;
    std::cout << "피라미드의 층수를 입력하세요: ";
    std::cin >> rows;

    // 입력받은 층 수에 따른 별 피라미드 출력
    sp.printPyramid(rows);
    // sp.starPiramid(); // 생성자 호출

    return 0;
}
