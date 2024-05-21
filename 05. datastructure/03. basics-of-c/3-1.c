#include <stdio.h>

int main(void)
{
    int i, korean[10], english[10], math[10];
    printf("국어, 영어, 수학 성적을 입력하세요 : ");
    for(i=0; i<10; i++)
    {
        scanf("%d %d %d",&korean[i], &english[i], &math[i]);
    }
    printf("학번   국어   영어   수학   총점   평균\n");
    printf("*********************************\n");
    for(i=0; i<10; i++)
    {
        int sum = korean[i] + english[i] + math[i];
        int average = sum / 3;
        printf("%2d %5d %5d %5d %6d %5d\n",i+1, korean[i],english[i],math[i],sum, average);
    }
    return 0;
}