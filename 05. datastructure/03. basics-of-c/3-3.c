#include <stdio.h>

int main(void)
{
    char str1[256], str2[256];
    int len1 = 0, len2 = 0, i, res=0;
    printf("두 개의 문자열을 입력하세요");
    scanf("%s %s",str1,str2);

    while(str1[len1] != 0)
        len1++;
    while(str2[len2] != 0)
        len2++;
    
    if(len1 == len2)
    {
        for(i=0; i<len1; i++)
        {
            if(str1[i] == str2[i])
                continue;
            else
                res++;
                break;
        }
        if(res == 0)
        {
            printf("두 문자열은 서로 같습니다");
        }else
        {
            printf("두 문자열은 서로 다릅니다");
        }
    }else{
        printf("두 문자열은 글자수가 다릅니다");
    }
}