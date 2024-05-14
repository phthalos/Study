#include <stdio.h>

int main(void)
{
    char str[5][256];
    printf("문자열 5개를 입력하세요. Enter로 구분됨");
    for(int i=0; i<5; i++)
    {
        scanf("%s",str[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}