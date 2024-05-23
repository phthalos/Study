#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrlen = 5;
    int idx = 0;
    int i;
    int *arr = (int *)malloc(sizeof(int) * arrlen);

    while (1)
    {
        printf("정수 입력: ");
        scanf("%d", &arr[idx]);
        if (arr[idx] == -1) // 사용자가 -1을 입력하기 전까지 정수를 무한히 입력받는다.
            break;

        if (arrlen == idx + 1)
        {
            arrlen += 3;
            arr = (int *)realloc(arr, sizeof(int) * arrlen); // 배열이 꽉 차면 realloc()을 이용하여 길이를 3씩 늘린다.
        }
        idx++;
    }
    for (i = 0; i < idx; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}