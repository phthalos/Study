#include <stdio.h>

void convertTime(int second)
{
    int hour, minute;
    hour = second / (60 * 60);
    minute = (second % (60 * 60)) / 60;
    second = (second % (60 * 60)) % 60;
    printf("[h: %d, m: %d, s: %d]",hour,minute,second);
}

int main(void)
{
    int n;
    printf("초(second) 입력 : ");
    scanf("%d",&n);
    convertTime(n);
}