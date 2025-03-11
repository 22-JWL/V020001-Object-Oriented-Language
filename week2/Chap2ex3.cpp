#include <iostream>
using namespace std;

int rect(int width, int height);

int main()
{

    int width, height;

    cout << "너비를 입력하세요: ";
    cin >> width;

    cout << "높이를 입력하세요: ";
    cin >> height;

    cout << "사각형의 면적은 " << rect(width, height) << "입니다." << endl;

    return 0;
}

int rect(int width, int height)
{
    return width * height;
}
// 사각형의 면적을 구하는 rect() 함수, 너비와 높이를 매개변수로 전달받는다.