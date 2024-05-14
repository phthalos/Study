#include <stdio.h>

int gcm(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcm(b, a%b);
}

int main(void)
{   int a, b;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&a,&b);
    printf("두 수의 최대공약수 : %d", gcm(a, b));
    return 0;
}