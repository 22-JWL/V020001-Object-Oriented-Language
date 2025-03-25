#ifndef EXP_H
#define EXP_H

class Exp
{
    // 멤버변수
    double base;
    double exp;

public:
    // 생성자 함수
    Exp();
    Exp(int b);
    Exp(int b, int e);

    // 멤버함수

    int getBase();
    int getExp();
    int getValue();
    bool equals(Exp b);

private:
    int base;
    int exp;
};

#endif