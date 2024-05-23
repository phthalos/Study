#include <stdio.h>
#include <stdlib.h>
// malloc()과 free()를 이용하면, 메모리 공간의 할당과 소멸 시점을 프로그래머가 직접 결정할 수 있다.
// 전역변수, 지역변수가 감당하지 못하는 일들을 해낼 수 있다.
int main(void)
{
    int *ptr1 = (int *)malloc(sizeof(int));     // 성공 시 할당된 메모리의 주소 값, 실패 시 NULL 반환
    int *ptr2 = (int *)malloc(sizeof(int) * 7); //(기본값이 void 형이므로, int*형으로 변환시켜주었다.)

    // int *ptr3 = (int *)calloc(30, sizeof(int)); // malloc()과 인자 전달방식에 차이가 있다. (4byte 블록 30개를 힙 영역에 할당)
    // malloc()은 할당된 공간을 별도의 값으로 초기화하지 않는다. (쓰레기 값으로 채워짐)
    // calloc()은 할당된 공간의 모든 비트를 0으로 초기화시킨다.

    // ptr2 = (int *)realloc(ptr2, sizeof(int) * 10); // 길이가 10인 int형 배열로 확장

    int i;

    *ptr1 = 20;
    for (i = 0; i < 7; i++)
        ptr2[i] = i + 1; // 힙 영역에 할당된 변수와 배열에 접근하여 값을 저장하고 있다.
    printf("%d \n", *ptr1);

    for (i = 0; i < 7; i++)
        printf("%d ", ptr2[i]); // 힙 영역에 할당된 변수와 배열에 저장된 값을 출력하고 있다.

    free(ptr1); // 프로그램 실행 시 할당된 모든 메모리 공간은, 프로그램이 종료되면 운영체제에 의해 전부 해제된다.
    free(ptr2); // 예제는 간단하므로 불필요해 보일 수 있지만, 실제 프로그램 구현에서는 습관적으로 사용하는 것이 좋다.
    return 0;
}