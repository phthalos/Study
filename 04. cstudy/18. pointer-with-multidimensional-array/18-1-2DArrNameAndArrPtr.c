#include <stdio.h>

int main(void)
{
    int arr1[2][2] = {
        {1, 2}, {3, 4}};
    int arr2[3][2] = {
        {1, 2}, {3, 4}, {5, 6}};
    int arr3[4][2] = {
        {1, 2}, {3, 4}, {5, 6}, {7, 8}};

    int(*ptr)[2]; // ptr은 int형 변수를 가리키면서, 포인터 연산 시 sizeof(int)x2의 크기단위로 값이 증가 및 감소하는 포인터 변수
    int i;

    ptr = arr1;
    printf("** Show 2,2 arr **\n");
    for (i = 0; i < 2; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);

    ptr = arr2;
    printf("** Show 3,2 arr **\n");
    for (i = 0; i < 3; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);

    ptr = arr3;
    printf("** Show 4,2 arr **\n");
    for (i = 0; i < 4; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    return 0;
}