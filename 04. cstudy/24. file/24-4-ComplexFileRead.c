#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE *fp = fopen("friend.txt", "rt");
    int ret;

    while (1)
    {
        ret = fscanf(fp, "%s %c %d", name, &sex, &age);
        if (ret == EOF) // fscanf()가 EOF를 반환하면 while문을 빠져나오게 된다.
            break;      // 그런데 EOF는 파일의 끝에 도달하거나 오류가 발생할 때 반환되므로, 이에 대한 구분이 필요하다면 feof()를 이용하자.
        printf("%s %c %d \n", name, sex, age);
    }
    fclose(fp);

    return 0;
}