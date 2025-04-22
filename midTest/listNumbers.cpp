#include "chap2.h"
#include <iostream>

using namespace std;

listNumbers::listNumbers()
{
}
listNumbers::~listNumbers()
{
}
void listNumbers::printList(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
}
