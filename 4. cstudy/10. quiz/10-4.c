#include <stdio.h>

int main(void)
{
    int money, bread=500, snack=700, drink=400, i, j, k;
    printf("현재 당신이 소유하고 있는 금액 : ");
    scanf("%d",&money);

    for(i=1; i<money/bread; i++)
    {
        for(j=1; j<money/snack; j++)
        {
            for(k=1; k<money/drink; k++)
            {
                if(money == bread*i + snack*j + drink*k)
                {
                    printf("크림빵 %d개, 새우깡%d개, 콜 라 %d개\n",i,j,k);
                }
            }
        }
    }
    printf("어떻게 구입하시겠습니까?");
    return 0;
}