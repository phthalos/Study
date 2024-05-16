#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    printf("문자열 입력: ");
    scanf("%s",str);

    int len=0, i;
    len = strlen(str);

    for(i=0; i<len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            printf("회문이 아닙니다.");
            break;
        }
        else{
            printf("회문입니다.");
            break;
        }
    }
    return 0;
}