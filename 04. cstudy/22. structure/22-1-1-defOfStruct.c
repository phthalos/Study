#include <stdio.h>

struct employee
{
    char name[20];
    char pid[20];
    int salary;
} emp;

int main(void)
{
    puts("=== 직원 정보 입력 ===");
    printf("이름: ");
    scanf("%s", emp.name);
    printf("주민등록번호: ");
    scanf("%s", emp.pid);
    printf("급여정보: ");
    scanf("%d", &emp.salary);
    puts("\n");
    puts("=== 직원 정보 출력 ===");
    printf("이름: %s\n", emp.name);
    printf("주민등록번호: %s\n", emp.pid);
    printf("급여정보: %d\n", emp.salary);

    return 0;
}