#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct circle
{
    Point cen; // 구조체 변수도 구조체의 멤버로 선언될 수 있다.
    double rad;
} Circle;

void ShowCircleInfo(Circle *cptr)
{
    printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
    printf("radius: %g \n\n", cptr->rad);
}

int main(void)
{
    Circle c1 = {{1, 2}, 3.5};
    Circle c2 = {2, 4, 3.9};
    ShowCircleInfo(&c1);
    ShowCircleInfo(&c2);
    return 0;
}