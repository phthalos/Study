#include <stdio.h>

int main(void)
{
    double a, b;
    double* ptr1 = &a;
    double* ptr2 = &b;
    double* temp;
    printf("실수 2개를 입력하세요 : ");
    scanf("%lf %lf",&a, &b);

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    printf("교환 결과 : %f %f",*ptr1, *ptr2);
    return 0;
}