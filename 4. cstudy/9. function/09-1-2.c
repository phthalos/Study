#include <stdio.h>

double CelToFah(double cel)
{
    return 1.8f*cel+32;
}

double FahToCel(double fah)
{
    return (fah-32)/1.8;
}

int main(void)
{
    double cel, fah;
    printf("섭씨, 화씨 온도를 입력하세요\n");
    scanf("%lf %lf",&cel, &fah);
    printf("\n섭씨 -> 화씨 변환 결과 : %f\n",CelToFah(cel));
    printf("화씨 -> 섭씨 변환 결과 : %f\n",FahToCel(fah));
    return 0;
}