#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};
int main(void)
{
    struct point pos = {10, 20};
    struct person man = {"이승기", "010-1212-0001", 21};

    printf("%p %p \n", &pos, &pos.xpos); // 구조체 변수(pos)의 주소 값은 구조체 변수의 첫 번째 멤버(pos.xpos)의 주소 값과 동일하다.
    printf("%p %p \n", &man, man.name);  // 구조체 변수(man)의 주소 값은 구조체 변수의 첫 번째 멤버(man.name)의 주소 값과 동일하다.

    return 0;
}