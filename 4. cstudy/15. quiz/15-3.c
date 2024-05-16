#include <stdio.h>

int main(void)
{
    int arr[10], n, start=0, end=9;
    printf("총 10개의 숫자 입력\n");
    for(int i=0; i<10; i++)
    {
        printf("입력: ");
        scanf("%d",&n);

        if(n % 2 == 0)
        {
            arr[end] = n;
            end--;
        }
        else
        {
            arr[start] = n;
            start++;
        }
    }
    printf("배열 요소의 출력: ");
    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}