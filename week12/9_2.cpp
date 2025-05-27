#include <iostream>
using namespace std;

class Shape
{
    Shape *next;

protected:
    virtual void draw() { cout << "Shape" << endl; } // 가상함수
public:
    Shape() { next = NULL; }
    void paint()
    {
        draw(); // 가상함수 호출
    }
    Shape *add(Shape *p);
    Shape *getNext()
    {
        return next;
    }
};
Shape *Shape::add(Shape *p) //<-rect를 던진다.
{
    this->next = p; //*시험문제 * 업캐스팅이다/
    return p;
}

class Circle : public Shape
{
protected:
    virtual void draw() { cout << "Circle" << endl; }
};
class Rect : public Shape
{
protected:
    virtual void draw() { cout << "Rect" << endl; }
};
class Line : public Shape
{
protected:
    virtual void draw() { cout << "Line" << endl; }
};
class Star
{
protected:
    virtual void draw() { cout << "Star" << endl; }
};

int main()
{
    Shape *pStart = NULL;
    Shape *pLast;

    pStart = new Circle();
    pLast = pStart;

    pLast = pLast->add(new Rect());

    pLast = pLast->add(new Line());

    pLast = pLast->add(new Circle());

    Shape *p = pStart;
    p->paint(); // Circle
    p = p->getNext();
    p->paint(); // Rect
    p = p->getNext();
    p->paint(); // Line
    p = p->getNext();
    p->paint(); // Circle

    /*
    Shape *pShape = new Circle(); // 업캐스팅
    pShape->paint();              // Circle

    pShape = new Line(); // 업캐스팅
    pShape->paint();     // Line
    */
}
