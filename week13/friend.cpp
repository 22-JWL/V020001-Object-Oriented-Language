#include <iostream>

using namespace std;
class Rect; // Forward declaration

class RectManager
{
public:
    bool equals(Rect r, Rect s);
    void copy(Rect &dest, Rect &src); // 참조자
};
bool RectManager::equals(Rect r, Rect s)
{
    if (r.width == s.width && r.height == s.height)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void RectManager::copy(Rect &dest, Rect &src)
{
    dest.width = src.width;
    dest.height = src.height;
}
class Rect
{
    int width, height;

public:
    Rect(int width, int height)
    {
        this->width = width;
        this->height = height;
    }
    friend RectManager; // RectManager 클래스가 Rect 클래스의 멤버 변수에 접근할 수 있도록 허용
    /// friend bool RectManager::equals(Rect r, Rect s);      // 일반함수로 선언 (친추)
    // friend void RectManager::copy(Rect &dest, Rect &src); // 일반함수로 선언 (친추)

    // friend bool equals(Rect r, Rect s); // 일반함수로 선언 (친추)
    //  friend 키워드를 사용하여 Rect 클래스의 멤버 변수에 접근할 수 있는 일반함수 equals를 선언
};

// 일반함수 (C언어식)
// bool equals(Rect r, Rect s)
// {
//     if (r.width == s.width && r.height == s.height)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

int main()
{
    Rect a(3, 4), b(4, 5), c(3, 4);
    RectManager man;
    if (man.equals(a, b))
        cout << "같음" << endl;
    else
        cout << "다름" << endl;
}
