#include <stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int* ptr = arr;
    for(int i=0; i<5; i++)
    {
        *ptr += 2;
        ptr++; // ptr에 저장된 값ㄴ을 증가시키는 형태의 연산을 기반으로 배열 요소에 접근
        printf("%d",arr[i]);
    }
    return 0;
}

