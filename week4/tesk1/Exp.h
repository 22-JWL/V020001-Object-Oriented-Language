#ifndef EXP_H
#define EXP_H

class Exp
{
private:
    int base;
    int exp;

public:
    // 생성자 함수
    Exp();
    Exp(int b);
    Exp(int b, int e);

    // 멤버 함수 (객체 상태를 변경하지 않으므로 const 지정)
    int getBase() const;
    int getExp() const;
    int getValue() const;
    bool equals(const Exp &other) const;
};

#endif
