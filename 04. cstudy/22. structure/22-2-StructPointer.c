#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};
int main(void)
{
    struct point pos1 = {1, 2};
    struct point pos2 = {100, 200};
    struct point *pptr = &pos1;

    (*pptr).xpos += 4; // pos1.xpos = 5;
    (*pptr).ypos += 5; // pos1.ypos = 7;
    printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

    pptr = &pos2;
    pptr->xpos += 1; // pos2.xpos = 101;
    pptr->ypos += 2; // pos2.ypos = 202;
    printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

    return 0;
}