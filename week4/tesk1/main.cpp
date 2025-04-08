#include <iostream>
using namespace std;
#include "Exp.h"
#include "Exp.cpp"

int main()
{
    Exp a(3, 2);
    Exp b(9);
    Exp c;

    cout << a.getValue() << " " << b.getValue() << " " << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ", 지수 " << a.getExp() << endl;

    if (a.equals(b))
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "different" << endl;
    }
}