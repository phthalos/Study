#include <stdio.h>

int main(void)
{
    int arr[3] = {11, 22, 33};
    int* ptr = arr; // int* ptr = &arr[0]; 과 같은 문장
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2)); // arr[0] arr[1] arr[2] 와 같음

    printf("%d ",*ptr); ptr++; // *(ptr) = arr[0]의 값 = 11 (ptr++은 후위증가이므로 11을 출력한 후 증가연산함)
    printf("%d ",*ptr); ptr++; // *(ptr+1) = arr[1]의 값 = 22
    printf("%d ",*ptr); ptr--; // *(ptr+1+1) = arr[2]의 값 = 33
    printf("%d ",*ptr); ptr--; // 22
    printf("%d ",*ptr); printf("\n"); // 11
    return 0;
}