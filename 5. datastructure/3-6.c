#include <stdio.h>

void reverse(char* str)
{
    char temp;
    int len = 0, i;
    while(str[len] != 0)
        len++;

    for(i=0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[(len-i)-1];
        str[(len-i)-1] = temp;
    }
    printf("%s",str);
}

int main(void)
{
    char str[256];
    printf("문자열을 입력하세요 : ");
    scanf("%s",str);
    reverse(str);

    return 0;
}