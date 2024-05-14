#include <stdio.h>

void multiplication(int a, int b)
{
    int min, max, i, j;
    if(a > b)
    {
        max = a;
        min = b;
    }else
    {
        max = b;
        min = a;
    }
    for(i=min; i<=max; i++)
    {
        for(j=1; j<=9; j++)
        {
            printf("%d X %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}

int main(void)
{
    int a, b;
    printf("출력하고 싶은 구구단의 최소, 최대 단 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    multiplication(a,b);

    return 0;
}