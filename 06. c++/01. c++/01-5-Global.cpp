#include <iostream>

int val = 100; // 전역변수

int SimpleFunc(void)
{
    int val = 20; // 지역변수
    val += 3;     // 지역변수 val의 값 3 증가
    ::val += 7;   // 이렇게 하면 지역변수와 이름이 동일한 전역변수에 접근할 수 있다! 전역변수 val의 값 7 증가
}