#include <stdio.h>

int main(void)
{
    char str[256];
    int len=0;
    printf("영단어를 입력하세요 : ");
    scanf("%s",str);

    while(str[len] != '\0')
        len++;
    printf("입력한 영단어의 길이는  %d", len);
    return 0;
}