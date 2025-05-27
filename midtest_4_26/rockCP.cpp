#include <iostream>
#include "_4_26.h"
using namespace std;

npc::npc()
{
    cout << "생성자 호출" << endl;
}

npc::~npc()
{
    cout << "소멸자 호출" << endl;
}
void npc::setS(string userInput)
{
    {
        static const string options[] = {"가위", "바위", "보"};
        srand(time(0));                   // Seed the random number generator
        string npc = options[rand() % 3]; // Assign a random choice
        cout << "NPC의 선택: " << npc << endl;
        if (userInput == npc)
        {
            cout << "비겼습니다." << endl;
        }
        else if ((userInput == "가위" && npc == "보") || (userInput == "바위" && npc == "가위") || (userInput == "보" && npc == "바위"))
        {
            cout << "당신이 이겼습니다." << endl;
        }
        else
        {
            cout << "당신이 졌습니다." << endl;
        }
    }
}
