#include <stdio.h>

void SwapIntPtr(int *p1, int *p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp; // p1과 p2의 값은 분명히 교환되었다.
    // p1은 num2를 가리키고, p2는 num1을 가리킨다.
    // 하지만 p1, p2와 ptr1, ptr2는 별개이므로 ptr1, ptr2가 가리키는 값은 바뀌지 않는다.
}

int main(void)
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    SwapIntPtr(ptr1, ptr2);
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
    return 0;
}