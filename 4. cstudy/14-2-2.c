#include <stdio.h>

void Swap3(int* n1, int* n2, int* n3)
{
    int temp;
    temp = *n3;
    *n3 = *n2;
    *n2 = *n1;
    *n1 = temp;
}

int main(void)
{
    int num1 = 1, num2 = 2, num3 = 3;
    printf("=== 원본 ===\n");
    printf("num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
    Swap3(&num1, &num2, &num3);
    printf("=== Swap3 실행 후 원본의 값 ===\n");
    printf("num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
    return 0;
}