#include "chap2.h"
#include <iostream>

using namespace std;

multiplicationTable::multiplicationTable()
{
    // 생성자: 초기화할 내용이 있다면 여기에 추가
}
multiplicationTable::~multiplicationTable()
{
    // 소멸자: 정리해야 할 것이 있다면 여기에 추가
}
void multiplicationTable::printTable(int n)
{
    // n x n 곱셈표 출력
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " X " << j << " = " << i * j << "\t"; // 각 곱셈 결과를 탭으로 구분하여 출력
        }
        cout << endl; // 각 행 끝에 개행 문자 출력
    }
}
