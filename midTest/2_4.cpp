#include <iostream>

using namespace std;

class Decimal
{
private:
    double decimal;

public:
    void setDecimal(double decimal);
    Decimal()
    {
        decimal = 0;
        cout << "소수" << decimal << "인 생성자 호출" << endl;
    }
    ~Decimal() { cout << "소수" << decimal << "인 소멸자 호출" << endl; }
    Decimal(double decimal);

    double getDecimal();
};
// set
void Decimal::setDecimal(double decimal) { this->decimal = decimal; }

// 생성자
Decimal::Decimal(double decimal)
{
    this->decimal = decimal;
    cout << "소수" << decimal << "인 생성자 호출" << endl;
}

// get
double Decimal::getDecimal()
{
    return decimal;
}

int main()
{
    int n, decimal;
    double max = 0;
    n = 5;

    // 동적할당
    Decimal *pArray = new Decimal[n];

    for (int i = 0; i < n; i++)
    {
        cout << "소수" << i + 1 << "번소수";
        cin >> decimal;
        pArray[i].setDecimal(decimal);
    }
    Decimal *p = pArray;

    if (p->getDecimal() >= (p + 1)->getDecimal())
        max = p->getDecimal();
    else
        max = (p + 1)->getDecimal();
    for (int i = 2; i < n; i++)
    {
        if (max < (p + i)->getDecimal())
            max = (p + i)->getDecimal();
    }
    cout << "최대값: " << max << endl;

    // 동적할당 해제
    delete[] pArray;

    return 0;
}