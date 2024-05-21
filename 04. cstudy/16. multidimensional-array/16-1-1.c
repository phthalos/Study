#include <stdio.h>
#define COL 3
#define ROW 9

int main(void)
{
    int arr[COL][ROW], i, j;
    for(i=0; i<COL; i++)
    {
        for(j=0; j<ROW; j++)
        {
            arr[i][j] = (i+2) * (j+1);
        }
    }

    for(i=0; i<COL; i++)
    {
        for(j=0; j<ROW; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}