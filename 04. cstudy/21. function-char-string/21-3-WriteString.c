#include <stdio.h>

int main(void)
{
    char *str = "Simple String";

    printf("\n1. puts test ------ \n");
    puts(str); // 출력 후 자동으로 개행이 이루어짐
    puts("So Simple String");

    printf("\n2. fputs test ------ \n");
    fputs(str, stdout); // 출력 후 자동으로 개행이 이루어지지 않는다
    printf("\n");
    fputs("So Simple String", stdout);
    printf("\n");

    printf("\n3. end of main ---- \n");
    return 0;
}