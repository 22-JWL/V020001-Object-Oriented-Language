#include <iostream>
using namespace std;

#include "Exp.h"

int main()
{
    Exp a;
    Exp b(8);
    Exp c(2, 3);

    cout << a.getValue() << endl;
    cout << b.getBase() << " " << b.getExp() << " " << b.getValue() << endl;
    cout << c.getExp() << " " << c.getValue() << endl;
}