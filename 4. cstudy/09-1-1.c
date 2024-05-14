#include <stdio.h>

int max(int a, int b, int c)
{
    if(a > b)
    {
        return (a > c) ? a : c ;
    }else
    {
        return (b > c) ? b : c;
    }
}

int min(int a, int b, int c)
{
    if(a < b)
    {
        return (a < c) ? a : c ;
    }else
    {
        return (b < c) ? b : c;
    }
}

int main(void)
{
    int a, b, c;
    printf("세 개의 정수를 입력하세요. 띄어쓰기로 구분됩니다.\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n가장 큰 수 : %d\n", max(a,b,c));
    printf("가장 작은 수 : %d", min(a,b,c));
    return 0;
}