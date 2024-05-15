#include <stdio.h>
#define SIZE 7

void BubbleSort(int ary[], int len);

int main(void)
{
    int arr[SIZE];
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("입력: ");
        scanf("%d",&arr[i]);
    }

    BubbleSort(arr, sizeof(arr)/sizeof(int));
    for(i=0; i<SIZE; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}

void BubbleSort(int ary[], int len)
{
    int i, j;
    int temp;

    for(i=0; i<len-1; i++)  // 오름차순 정렬
    {
        for(j=0; j<(len-i)-1; j++)
        {
            if(ary[j]<ary[j+1])
            {
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
}