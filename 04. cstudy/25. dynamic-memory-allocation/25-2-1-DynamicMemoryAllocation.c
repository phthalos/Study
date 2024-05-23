#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int maxlen, len, i;
    char *str;
    printf("문자열의 최대 길이 입력: ");
    scanf("%d", &maxlen);
    getchar();                                         // scanf()에서 받은 \n 삭제
    str = (char *)malloc(sizeof(char) * (maxlen + 1)); // \0포함한 길이의 char 배열 할당

    printf("문자열 입력: ");
    fgets(str, maxlen + 1, stdin); // 문자열을 저장할 곳, 길이, 파일(stdin)
    str[strlen(str) - 1] = 0;      // fgets()에서 받은 \n 삭제
    len = strlen(str);

    for (i = len; i > 0; i--)
    {
        if (str[i] == ' ')
        {
            printf("%s ", &str[i + 1]); // 문자열의 마지막에서부터 읽되, 띄어쓰기를 만나면 지금까지 읽은 단어를 출력한다.
            str[i] = 0;                 // 방금 읽은 띄어쓰기는 널 문자로 교체하여, 지금까지 읽은 단어를 잘라내버린다.
        }
    }
    printf("%s", &str[0]);
    free(str);
    return 0;
}