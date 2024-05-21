#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct circle
{
    double radius;
    struct point *center; // 구조체 point의 주소를 저장함
};

int main(void)
{
    struct point cen = {2, 7};
    double rad = 5.5;

    struct circle ring = {rad, &cen};
    printf("원의 반지름: %g \n", ring.radius); // 5.5
    printf("원의 중심[%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
    return 0;
}