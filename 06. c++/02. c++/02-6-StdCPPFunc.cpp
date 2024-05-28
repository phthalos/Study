#include <cstdio>  // #include <stdio.h> (stdio.h와 cstdio는 C언어의 헤더파일이다. iostream은 C++용 헤더파일이다.)
#include <cstdlib> // #include <stdlib.h>
#include <cmath>   // #include <math.h>
#include <cstring> // #include <string.h>
using namespace std;

int main(void)
{
    char str1[] = "Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f \n", str1, sin(0.14));
    printf("%s: %f \n", str2, abs(-1.25)); // C언어의 표준함수를 호출했다. 잘 작동된다.
    return 0;                              // 그래도 가급적 C++의 문법을 기반으로 개선된 형태로 구성된, C++용 헤더를 기반으로 작성하는 것이 좋다.
}
