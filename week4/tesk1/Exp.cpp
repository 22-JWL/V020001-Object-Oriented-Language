#include "Exp.h"

// 기본 생성자: 기본값 1, 지수 1
Exp::Exp() : base(1), exp(1) {}

// 인자 하나를 받는 생성자: base는 전달된 값, exp는 1로 초기화
Exp::Exp(int b) : base(b), exp(1) {}

// 인자 두 개를 받는 생성자: base와 exp 모두 전달된 값으로 초기화
Exp::Exp(int b, int e) : base(b), exp(e) {}

// base를 반환 (멤버 변수를 변경하지 않으므로 const)
int Exp::getBase() const
{
    return base;
}

// exp를 반환 (멤버 변수를 변경하지 않으므로 const)
int Exp::getExp() const
{
    return exp;
}

// base의 exp 승 값을 계산하여 반환 (멤버 변수를 변경하지 않으므로 const)
int Exp::getValue() const
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

// 두 Exp 객체의 값(getValue())이 같으면 true, 아니면 false 반환 (멤버 변수를 변경하지 않으므로 const)
bool Exp::equals(const Exp &other) const
{
    return this->getValue() == other.getValue();
}
