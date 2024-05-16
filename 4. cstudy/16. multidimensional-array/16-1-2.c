#include <stdio.h>

int main(void)
{
    int arrA[2][4] = {{1, 2, 3, 4},{5, 6, 7, 8}};
    int arrB[4][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
            arrB[j][i] = arrA[i][j];
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
            printf("%d ",arrB[i][j]);
        printf("\n");
    }
    return 0;
}