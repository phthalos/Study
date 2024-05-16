#include <stdio.h>

int SquareByValue(int n)
{
    return n * n;
}

void SquareByReference(int* ptr)
{
    int num = *ptr;
    *ptr = num * num;

}

int main(void)
{
    int n;
    printf("정수 1개를 입력하세요 : ");
    scanf("%d", &n);
    printf("SquareByValue : %d\nSquareByValue 후 원본 : %d \n",SquareByValue(n), n);
    SquareByReference(&n);
    printf("SquareByReference 후 원본 : %d",n);
}