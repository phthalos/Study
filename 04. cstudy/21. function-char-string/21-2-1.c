#include <stdio.h>

int ConvCase(int ch)
{
    int diff = 'a' - 'A';
    if ('A' <= ch && ch <= 'Z')
        return ch + diff; // 입력이 대문자면 소문자로 변환
    else if ('a' <= ch && ch <= 'z')
        return ch - diff; // 입력이 소문자면 대문자로 변환
    else
        return -1;
}

int main(void)
{
    int ch;
    printf("문자 입력 : ");
    ch = getchar();
    ch = ConvCase(ch);
    if (ch == -1)
    {
        puts("범위를 벗어난 입력입니다.");
        return -1; // 운영체제에게 에러를 실행함을 알림
    }
    putchar(ch);
    return 0; // 에러 없이 함수가 종료됨을 알림
}

// 97 ~ 122 소문자
// 65 ~ 90 대문자