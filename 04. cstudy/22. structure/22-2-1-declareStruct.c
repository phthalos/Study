#include <stdio.h>

struct employee
{
    char name[20];
    char pid[20];
    int salary;
} emp[3];

int main(void)
{

    puts("=== 직원 정보 입력 ===");
    for (int i = 0; i < 3; i++)
    {
        printf("이름: ");
        scanf("%s", emp[i].name);
        printf("주민등록번호: ");
        scanf("%s", emp[i].pid);
        printf("급여정보: ");
        scanf("%d", &emp[i].salary);
        puts("");
    }
    puts("=== 직원 정보 출력 ===");
    for (int i = 0; i < 3; i++)
    {
        printf("이름: %s\n", emp[i].name);
        printf("주민등록번호: %s\n", emp[i].pid);
        printf("급여정보: %d\n", emp[i].salary);
        puts("");
    }

    return 0;
}