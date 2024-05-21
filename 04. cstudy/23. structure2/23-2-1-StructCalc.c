#include <stdio.h>

// 구조체 변수를 대상으로 저장된 값을 서로 바꿔보자.

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *ptr1, Point *ptr2)
{
    Point temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void)
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    SwapPoint(&pos1, &pos2);

    printf("pos1: [2, 4] -> [%d, %d] \n", pos1.xpos, pos1.ypos);
    printf("pos2: [5, 7] -> [%d, %d] \n", pos2.xpos, pos2.ypos);
    return 0;
}