#include <stdio.h>

int main(void)
{
    char str[256], temp;
    int len=0, i;
    printf("영단어를 입력하세요 : ");
    scanf("%s",str);
    while(str[len] != 0)
        len++;
    for(i=0; i<len/2; i++)
    {
        temp=str[i];
        str[i]=str[(len-i)-1];
        str[(len-i)-1]=temp;
    }
    printf("%s",str);
    return 0;
}