#include <stdio.h>

void SoSimpleFunc(void)
{
    printf("I'm so simple");
}

int main(void)
{
    int num = 20;
    void *ptr;  // 어떠한 변수의 주소 값이든 담을 수 있다. 함수의 주소 값도 담을 수 있다.
                // 하지만 void형 포인터로는 아무런 포인터 연산도 할 수 없다. 값의 참조, 변경도 불가능.
    ptr = &num; // 가리키는 대상에 대한 타입 정보가 담겨있지 않기 때문이다.
    printf("%p \n", ptr);

    ptr = SoSimpleFunc;
    printf("%p \n", ptr);
    return 0;

    // int num = 20;
    // void *ptr = &num;
    // *ptr = 20; // ERROR : expression must be a modifiable lvalue
    // ptr++;     // ERROR !!
}