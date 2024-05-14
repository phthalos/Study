#include <stdio.h>

int main(void)
{
    int num1=10, num2=20; // int형 변수 num1 과 num2를 선언과 동시에 각각 10과 20으로 초기화하고,
    int* ptr1 = &num1; // int형 포인터 편수 ptr1과 ptr2를 선언하여 각각 num1과 num2를 가리키게 하자.
    int* ptr2 = &num2;
    (*ptr1) += 10; // 그리고 이 상태에서 포인터 변수 ptr1과 ptr2를 이용해서 num1의 값을 10 증가시키고,
    (*ptr2) -= 10; // num2의 값을 10 감소시키자.
    int* temp; //이제 두 포인터 변수 ptr1과 ptr2가 가리키는 대상을 서로 바꾸자.
    temp = ptr1; // 즉, 포인터 변수 ptr1이 num2를 가리키게 하고,
    ptr1 = ptr2; // ptr2가 num1을 가리키게 하자.
    ptr2 = temp;
    printf("%d %d",*ptr1, *ptr2); // 그리고 마지막으로 ptr1과 ptr2가 가리키는 변수에 저장된 값을 출력하자.
    return 0;
}