#include <stdio.h>

int main(void)
{
    char str1[]="My String";
    char* str2 = "Your String";
    printf("%s %s \n",str1, str2);

    str2="Our String"; // 포인터 변수 str2의 가리키는 대상 변경
    printf("%s %s \n",str1, str2);

    str1[0]='X'; // 문자열 변경 성공
    str2[0]='X'; // 문자열 변경 실패
    printf("%s %s \n",str1, str2);
    return 0;
}