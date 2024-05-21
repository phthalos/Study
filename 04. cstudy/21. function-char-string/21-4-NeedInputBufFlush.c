#include <stdio.h>

int main(void)
{
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin); // 6자리 숫자 + \0 + \n 총 8문자이므로, \n은 입력버퍼에 남아있게 된다.

    fputs("이름 입력: ", stdout);
    fgets(name, sizeof(name), stdin); // 입력버퍼에 남아있던 \n이 입력되는데, fgets()는 \n을 만날 때까지만 읽어들이므로 실행 결과가 이상해진다.

    printf("주민번호: %s \n", perID);
    printf("이름: %s \n", name);
    return 0;
}