#include <stdio.h>

int main(void)
{
    FILE *src = fopen("src.txt", "rt"); // read text
    FILE *des = fopen("dst.txt", "wt"); // write text
    int ch;                             // 문자 단위이다. 문자열 단위로 복사할 경우 char str[20];

    if (src == NULL || des == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, des);

    if (feof(src) != 0) // 파일의 끝을 확인하는 함수. 파일의 끝에 도달한 경우 0이 아닌 값을 반환한다.
        puts("파일복사 완료!");
    else
        puts("파일복사 실패!");

    fclose(src);
    fclose(des);
    return 0;
}