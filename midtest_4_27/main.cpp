#include <iostream>
#include "Circle.h"
#include "Circle.cpp"
using namespace std;

int main()
{
    cout << "입력할 정수 개수 : ";
    int n;
    cin >> n;

    // int *p = new int[n];
    int *p;
    p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "번째 정수";
        cin >> p[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    cout << "평균" << sum / n << endl;

    delete[] p;
}