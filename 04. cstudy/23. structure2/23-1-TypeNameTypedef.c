#include <stdio.h>

typedef int INT; // 자료형 'int'에 새로운 이름, 별명 INT를 붙였다.
typedef int *PTR_INT;

typedef unsigned int UNIT;
typedef unsigned int *PTR_UNIT; // 자료형 'unsigned int의 포인터'에 PTR_UNIT이라는 별명을 붙였다.

typedef unsigned char UCHAR;
typedef unsigned char *PTR_UCHAR;

int main(void)
{
    INT num1 = 120;
    PTR_INT pnum1 = &num1;

    UNIT num2 = 190;
    PTR_UNIT pnum2 = &num2;

    UCHAR ch = 'Z';
    PTR_UCHAR pch = &ch;

    printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
    return 0;
}