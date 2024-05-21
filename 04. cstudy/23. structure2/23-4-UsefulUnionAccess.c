#include <stdio.h>

typedef struct dbshort
{
    unsigned short upper; // short형은 2바이트이다.
    unsigned short lower; // 여기에 4바이트인 int가 들어오면 2바이트씩 잘려서 처음은 상위 2바이트, 그 다음은 그 다음(하위)2바이트로 잘리게 된다.
} DBShort;

typedef union rdbuf // 공용체는 메모리를 공유한다. 값은 iBuf에 입력되었지만 bBuf[4], sBuf도 공유하게 된다.
{
    int iBuf; // 공용체에서 크기가 가장 큰 멤버가 4바이트를 가지므로, 공용체는 총 4바이트를 할당받는다.
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

int main(void)
{
    RDBuf buf;
    printf("정수 입력: ");
    scanf("%d", &(buf.iBuf));

    printf("상위 2바이트: %u \n", buf.sBuf.upper); // %u: 양의 정수 (unsigned int)
    printf("하위 2바이트: %u \n", buf.sBuf.lower);
    printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]); // 4바이트 배열에서 첫 번째 요소만 떼어내어 상위 1바이트를 표시
    printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);
    return 0;
}