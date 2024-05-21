#include <stdio.h>

int main(void)
{
    char str[256];
    int len=0, i;
    char max=0;
    printf("영단어를 입력하세요 : ");
    scanf("%s",str);
    while(str[len] != 0)
        len++;
    
    for(i=0; i<len; i++)
    {
        if(max<str[i])
            max=str[i];
    }
    printf("가장 큰 아스키 코드 값의 문자 : %c",max);
    return 0;
}