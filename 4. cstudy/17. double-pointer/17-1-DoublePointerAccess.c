#include <stdio.h>

int main(void)
{
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr);  // num의 주소를 가리키는 포인터 ptr과, ptr의 주소를 가리키는 dptr의 각자 주소를 출력
    printf("%9g %9g \n", num, **dptr); // num의 값과 dptr이 가리키는 메모리 주소는 결국 동일하다.
    ptr2 = *dptr;                      // 새로운 포인터 변수 ptr2에 dptr의 값을 저장하고,
    *ptr2 = 10.99;                     // ptr2의 값의 변경을 시도해 본다.
    printf("%9g %9g \n", num, **dptr); // num의 값은 과연 바뀌었을까?
    return 0;
}