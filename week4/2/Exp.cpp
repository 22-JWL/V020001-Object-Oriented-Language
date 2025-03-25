#include "Exp.h"
#include <iostream>
using namespace std;

Exp::Exp(int b, int e)
{
    base = b;
    exp = e;
}
Exp::Exp(int b)
{
    base = b;
    exp = 1;
}
Exp::Exp()
{
    base = 1;
    exp = 1;
}

int Exp::getBase()
{
    return base;
}
int Exp::getExp()
{
    return exp;
}
int Exp::getValue()
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}
bool Exp::equals(Exp b)
{
    if (getValue() == b.getValue())
    {
        return true;
    }
    else
    {
        return false;
    }
}