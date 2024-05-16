#include <stdio.h>

int main(void)
{
    int n;
    printf("10진수 정수를 입력하세요 : ");
    scanf("%d", &n);
    printf("변환된 16진수 : %X", n);
    return 0;
}