#include <stdio.h>

void SwapIntPtr(int **dp1, int **dp2) // 더블 포인터
{
    int *temp = *dp1; // int *temp = ptr1;
    *dp1 = *dp2;      // ptr1 = ptr2;
    *dp2 = temp;      // ptr2 = temp;
}

int main(void)
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    SwapIntPtr(&ptr1, &ptr2); // 이번에는 ptr1, ptr2의  값이 아닌, 그들의 주소값이 전달되었다. (num1, num2의 주소값을 담고있는 변수의 주소값)
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
    return 0;
}