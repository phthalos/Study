#include <stdio.h>

int main(void)
{
    int num = 10;
    int* ptr1 = &num; // 포인터 변수 ptr1에 num의 주소값이 저장된다.
    int* ptr2 = ptr1; // 포인터 변수 ptr2에 ptr1의 주소값이 저장된다.

    (*ptr1)++; // 포인터 ptr1의 역참조, num에 후위 증가 연산을 실행한다. num == 11
    (*ptr2)++; // 포인터 ptr2의 역참조, ptr1에 후위 증가 연산을 실행한다. num == 12
    printf("%d",num);
    return 0;
}