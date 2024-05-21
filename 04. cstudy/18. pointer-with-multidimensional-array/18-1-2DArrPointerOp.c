#include <stdio.h>

int main(void)
{
    int arr1[3][2];
    int arr2[2][3];

    printf("  arr1: %p\n", arr1);
    printf("arr1+1: %p\n", arr1 + 1); // arr1 + sizeof(int) * 배열의 가로길이(2)
    printf("arr1+2: %p\n", arr1 + 2); // arr1 + sizeof(int) * 배열의 가로길이(2) * 2

    printf("  arr2: %p\n", arr2);
    printf("arr2+1: %p\n", arr2 + 1); // arr2 + sizeof(int) * 배열의 가로길이(3)
    // 배열이름 arr이 가리키는 대상은 int형 변수이고, arr의 값을 1 증가하면 실제로는 sizeof(int)x배열의 가로길이만큼 주소 값이 증가하는 포인터 형이다.
    // arr은 가리키는 대상이 int형 변수이고, 포인터 연산 시 sizeof(int)x배열의 가로길이만큼 값이 증가 및 감소하는 포인터 형이다.
    return 0;
}