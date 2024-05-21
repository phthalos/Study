#include <stdio.h>

void MaxAndMin(int **mxPtr, int **mnPtr, int *arr)
{
    int *max, *min;
    int i;
    max = min = &arr[0];
    for (i = 0; i < 5; i++)
    {
        if (*max < arr[i])
            max = &arr[i];
        if (*min > arr[i])
            min = &arr[i];
    }
    *mxPtr = max;
    *mnPtr = min;
}

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("정수 입력 %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr);
    printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
    return 0;
}