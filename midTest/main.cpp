#include <iostream>
#include "chap2.h"
#include "listNumbers.cpp"          // listNumbers 클래스 구현 포함
#include "multiplicationTable.cpp"  // multiplicationTable 클래스 구현 포함
#include "compareTwoIntegers.cpp"   // compareTwoIntegers 클래스 구현 포함
#include "chooseBiggestDecimal.cpp" // chooseBiggestDecimal 클래스 구현 포함

using namespace std;

int main()
{

    // 1.
    listNumbers ln; // listNumbers 클래스 인스턴스 생성
    int n;

    cout << "출력할 숫자의 개수를 입력하세요: ";
    cin >> n;

    // 입력받은 숫자 개수에 따른 리스트 출력
    ln.printList(n);

    // 2.
    multiplicationTable mt; // multiplicationTable 클래스 인스턴스 생성
    int m;
    cout << "출력할 구구단의 단수를 입력하세요: ";
    cin >> m;
    // 입력받은 단수에 따른 구구단 출력
    mt.printTable(m);

    // 3.
    compareTwoIntegers cti; // compareTwoIntegers 클래스 인스턴스 생성
    int a, b;
    cout << "비교할 두 정수를 입력하세요: ";
    cin >> a >> b;
    // 입력받은 두 정수를 비교하여 결과 출력
    cti.compare(a, b);

    // 4.
    chooseBiggestDecimal cbd; // chooseBiggestDecimal 클래스 인스턴스 생성

    float x, y, z, w, v;
    cout << "비교할 다섯 개의 실수를 입력하세요: ";
    cin >> x >> y >> z >> w >> v;
    // 입력받은 다섯 개의 실수를 비교하여 가장 큰 수 출력
    cbd.compare(x, y, z, w, v);

    // 5.

    return 0;
}
