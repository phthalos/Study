#include <stdio.h>

int main(void)
{
    int arr[6] = {1,2,3,4,5,6};
    int* start = arr;
    int* end = &arr[5];
    int i, temp;
    for(i=0; i<3; i++)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start += 1;
        end -= 1;
    }
    for(i=0; i<6; i++)
    {
        printf("%d ",arr[i]);
    }
}