#include <stdio.h>
#include <stdarg.h>

int Sum(int n, ...)
{
    int sum = 0;
    int i;
    va_list vlist; // 가변인자를 가리킬 수 있는 참조자를 선언한다.

    va_start(vlist, n); // 참조자가 가변인자를 실제로 참조할 수 있도록 한다.
    for (i = 0; i < n; i++)
        sum += va_arg(vlist, int); // 참조자를 통해 전달된 정보를 추출한다.

    va_end(vlist); // 참조자가 더 이상 가변인자를 가리키지 않도록 해제한다.
    return sum;
}

int main(void)
{
    printf("1+2=%d \n", Sum(2, 1, 2)); // 함수 호출을 통해 전달된 가변인자들은 메모리 공간에 저장된다. 그런데 이들은 이름이 존재하지 않으므로 이들의 참조를 위해, 참조자 역할을 담당하는 va_list형 변수를 선언한다.
    printf("1+2+3=%d \n", Sum(3, 1, 2, 3));
    printf("1+2+3+4=%d \n", Sum(4, 1, 2, 3, 4));
    return 0;
}