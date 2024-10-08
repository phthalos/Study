#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{                           // 매개변수의 선언으로도 함수 포인터 변수가 올 수 있다.
    return cmp(age1, age2); // 반환형이 int이고, int형 변수 2개가 매개변수로 선언된 함수의 이름(함수의 주소 값)이 전달되어야 한다.
}

int OlderFirst(int age1, int age2)
{
    if (age1 > age2)
        return age1;
    else if (age1 < age2)
        return age2;
    else
        return 0;
}

int YoungerFirst(int age1, int age2)
{
    if (age1 < age2)
        return age1;
    else if (age1 > age2)
        return age2;
    else
        return 0;
}

int main(void)
{
    int age1 = 20;
    int age2 = 30;
    int first;

    printf("입장순서 1 \n");
    first = WhoIsFirst(age1, age2, OlderFirst);
    printf("%d세와 %d 중 %d세가 먼저 입장! \n\n", age1, age2, first);

    printf("입장순서 2 \n");
    first = WhoIsFirst(age1, age2, YoungerFirst);
    printf("%d세와 %d 중 %d세가 먼저 입장! \n\n", age1, age2, first);
    return 0;
}