#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE *fp = fopen("friend.txt", "wt");
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("이름 성별 나이 순 입력: ");
        scanf("%s %c %d", name, &sex, &age); // scanf()는 Enter키의 입력을 읽어들이지 않고 입력버퍼에 남겨둔다.
        getchar();                           // 버퍼에 남아있는 /n을 지움
        fprintf(fp, "%s %c %d", name, sex, age);
    }
    fclose(fp);
    return 0;
}