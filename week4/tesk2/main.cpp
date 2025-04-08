#include <iostream>
using namespace std;
#include "BrewMachine.h"
#include "BrewMachine.cpp"
// BrewMachine.cpp와 BrewMachine.h를 포함합니다.
// BrewMachine 클래스의 메서드를 사용하기 위해 BrewMachine.cpp를 포함합니다.

int main()
{
    // 초기 원두: 5, 물: 4, 설탕: 3, 우유:5로 BrewMachine 객체 생성
    BrewMachine machine(5, 4, 3, 5);
    machine.processMenu();
    return 0;
}
