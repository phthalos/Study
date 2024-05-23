#include <stdio.h>

int main(void)
{
    char str[30];
    int ch;
    FILE *fp = fopen("thirdFile.txt", "rt");
    if (fp == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }

    ch = fgetc(fp);
    printf("%c \n", ch); // A

    ch = fgetc(fp);
    printf("%c \n", ch); // B

    fgets(str, sizeof(str), fp); // 호출될때마다 \n을 만날 때까지 읽어들인다.
    printf("%s", str);           // My name is Kim

    fgets(str, sizeof(str), fp);
    printf("%s", str); // Your name is Lee

    fclose(fp);
    return 0;
}