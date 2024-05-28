#include "source.h"

int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

// NameSp2.cpp를 함수의 선언만 있는 헤더파일, 함수의 정의만 있는 소스파일, main함수만 있는 파일로 분리해 보자.