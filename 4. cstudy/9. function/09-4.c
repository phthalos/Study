#include <stdio.h>

int Factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n * Factorial(n-1);
}

int main(void)
{
    int n;
    printf("출력하려는 팩토리얼 : ");
    scanf("%d",&n);
    printf("%d", Factorial(n));
}