#include <stdio.h>

int main(void)
{
    char str[100];
    FILE *fp = fopen("mystory.txt", "rt");
    if (fp == NULL)
    {
        puts("파일오픈실패!");
        return -1;
    }
    while (fgets(str, sizeof(str), fp) != NULL)
        printf("%s", str);

    fclose(fp);
    return 0;
}