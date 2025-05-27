#include <iostream>
#include "_4_26.h"
#include "rockCP.cpp"
using namespace std;

int main()
{

    cout << "가위바위 보 게임을 합니다" << endl;

    string userInput1;
    cout << "당신의 선택: ";
    cin >> userInput1;

    npc npc;
    npc.setS(userInput1);

    return 0;
}