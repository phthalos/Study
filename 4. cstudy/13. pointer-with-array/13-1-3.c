#include <stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = &arr[4];
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += *(ptr--); // ptr에 '저장된 값'을 감소시키는 형태
    }
    printf("%d",sum);
}