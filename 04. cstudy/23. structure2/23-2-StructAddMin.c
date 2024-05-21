#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2)
{
    Point pos = {pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos}; // 5+2, 6+9
    return pos;                                                 // 7,15
}

int main(void)
{
    Point pos1 = {5, 6}; // 구조체(struct point=Point)의 변수(pos1)의 첫 번째 멤버(xpos)는 5, 두 번째 멤버(ypos)는 6으로 초기화.
    Point pos2 = {2, 9};
    Point result; // 구조체 point의 변수 result에는 AddPoint(pos1, pos2)의 실행결과인 pos, 즉 (7, 15)가 멤버로 담겨있다.

    result = AddPoint(pos1, pos2);                   // pos1(5, 6)의 모든 멤버를 복사해서 전달함. pos2(2,9)도 복사해서 전달함.
    printf("[%d, %d] \n", result.xpos, result.ypos); // [7, 15]
}