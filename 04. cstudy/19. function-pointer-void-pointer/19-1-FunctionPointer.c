#include <stdio.h>

void SimpleAdder(int n1, int n2) // 반환형이 void이고, 매개변수로 int형 변수 2개가 선언된 포인터 타입
{
    printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char *str) // 반환형이 void이고, 매개변수로 char* 형 변수 1개가 선언된 포인터 타입
{
    printf("%s \n", str);
}

int main(void)
{
    char *str = "Function Pointer";
    int num1 = 10, num2 = 20;

    void (*ftpr1)(int, int) = SimpleAdder; // 함수의 주소 값 저장을 위한 함수 포인터 변수 선언 방법
    void (*ftpr2)(char *) = ShowString;

    fptr1(num1, num2); // SimpleAdder(num1, num2);와 동일한 결과
    fptr2(str);
    return 0;
}