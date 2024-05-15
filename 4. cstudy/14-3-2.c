#include <stdio.h>

void ShowData(const int* ptr)
{
    int* rptr = ptr;
    printf("%d \n", *rptr);
    *rptr = 20;
}

int main(void)
{
    int num = 20;
    int* ptr = &num;
    ShowData(ptr);
    return 0;
}

 // Q. 위 예제에서 한 가지 지적할만한 사항은?
 /* A. 3번 라인에서 int* ptr에 const 선언이 추가되어 있어 포인터 변수 ptr이 가리키는 변수 num의 값을 변경할 수 없다.
        5번 라인에서 포인터 변수 rptr은 ptr을 가리키는 포인터 변수이고,
        7번 라인의 *rptr은 결국 ptr이 가리키는 값인 num을 20으로 변경하려 하고 있다.
        값을 변경할 수는 있지만 이것을 허용하면 const 선언의 의미가 없어지므로, 7번 라인의 rptr을 이용하여 값을 변경하려는 시도가 잘못되었다.
 */