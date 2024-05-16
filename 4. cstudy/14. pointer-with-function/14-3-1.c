#include <stdio.h>

void ShowAllData(const int* arr, int len)
{
    int i;
    for(i=0; i<len; i++)
        printf("%d",arr[i]);
}

 // Q. 매개변수 arr을 대상으로 const 선언을 한 이유가 무엇이겠는가? 이 함수를 정의한 사람의 의도는?
/*
    A. const 선언은 포인터 변수가 가리키는 변수에 저장된 값의 변경을 허용하지 않는다.
        따라서, 프로그래머가 실수로 배열요소의 값을 바꾸는 것을 사전에 방지할 수 있다.
        만약 값을 바꾸는 코드를 작성할 경우, const 선언으로 인해 컴파일 에러가 발생한다.
*/