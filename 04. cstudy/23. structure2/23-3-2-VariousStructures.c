#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle
{
    Point ul; // 좌 상단
    Point lr; // 우 하단
} Rectangle;

void PrintRecArea(Rectangle rec)
{
    int area = (rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos);
    printf("Area: %d \n", area);
}

void PrintRecPos(Rectangle rec)
{
    printf("[%d, %d][%d, %d]\n[%d, %d][%d, %d]\n",
           rec.ul.xpos, rec.ul.ypos,
           rec.lr.xpos, rec.ul.ypos,
           rec.ul.xpos, rec.lr.ypos,
           rec.lr.xpos, rec.lr.ypos);
}

int main(void)
{
    Rectangle rec1 = {{1, 1}, {4, 4}};
    Rectangle rec2 = {{0, 0}, {7, 5}};
    PrintRecArea(rec1);
    PrintRecPos(rec1);

    PrintRecArea(rec2);
    PrintRecPos(rec2);
    return 0;
}