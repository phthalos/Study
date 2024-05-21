#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
    while (getchar() != '\n')
        ;
}

int main(void)
{
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin);
    ClearLineFromReadBuffer(); // 입력버퍼를 비운다. 필요한 만큼만 읽어들이고, 입력버퍼에 남은 문자열을 모두 지워버린다.

    fputs("이름 입력: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호: %s \n", perID);
    printf("이름: %s \n", name);
    return 0;
}