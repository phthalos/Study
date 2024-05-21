#include <stdio.h>

typedef struct sbox // 구조체
{
    int mem1;
    int mem2;
    double mem3;
} Sbox;

typedef union ubox // 공용체. 하나의 메모리 공간을 둘 이상의 방식으로 접근할 수 있다.
{
    int mem1;
    int mem2;
    double mem3;
} Ubox;

int main(void)
{
    Sbox sbx;
    Ubox ubx;

    // 구조체는 구조체를 구성하는 멤버 각각에게 메모리가 할당된다. (int 4바이트 + int 4바이트 + double 8바이트 = 16바이트 할당)
    // 공용체는 공용체를 구성하는 멤버 중 크기가 가장 큰 멤버에게만 메모리가 할당되고, 나머지 멤버는 이를 공유하게 된다. (double 8바이트 할당)
    printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3); // 구조체: 멤버별로 서로 다른 주소값을 가짐
    printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3); // 공용체: 멤버가 모두 동일한 주소값을 가짐

    ubx.mem1 = 20;
    printf("mem1: %d\n", ubx.mem2); // mem1과 mem2가 메모리 공간을 공유하고 있다.

    ubx.mem3 = 7.15;
    printf("mem1: %d\n", ubx.mem1); // mem3에 실수를 덮어썼기 때문에, 상위 4바이트를 읽어 알 수 없는 값이 출력됐다.
    printf("mem2: %d\n", ubx.mem2);
    printf("mem3: %g\n", ubx.mem3);
    return 0;
}