#ifndef STARPIRAMID_H
#define STARPIRAMID_H

class starPiramid
{
public:
    starPiramid();  // 기본 생성자
    ~starPiramid(); // 소멸자

    // 주어진 행 수에 맞게 별 피라미드를 출력하는 함수선언
    void printPyramid(int rows);
};

#endif // STARPIRAMID_H
