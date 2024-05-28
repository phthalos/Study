#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point &PntAdder(const Point &p1, const Point &p2)
{
    Point *pptr = new Point;
    pptr->xpos = p1.xpos + p2.xpos;
    pptr->ypos = p1.ypos + p2.ypos;
    return *pptr;
}

int main(void)
{
    // Point *pptr1 = (Point*)malloc(sizeof(Point)*1);
    Point *pptr1 = new Point; // new 연산자를 사용하여 구조체 Point형의 포인터 변수 pptr을 동적할당하였다.
    pptr1->xpos = 3;
    pptr1->ypos = 30;

    Point *pptr2 = new Point;
    pptr2->xpos = 70;
    pptr2->ypos = 7;

    Point &pref = PntAdder(*pptr1, *pptr2);
    cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;

    delete pptr1; // 할당된 메모리 공간의 소멸도 철저해야 한다.
    delete pptr2;
    delete &pref;
    return 0;
}
