#include <iostream>
#include <string.h> //C++에서 C언어의 헤더파일을 추가하는 것도 가능하다.
#include <stdlib.h>
using namespace std;

char *MakeStrAdr(int len)
{
    char *str = (char *)malloc(sizeof(char) * len); // 할당할 대상의 정보를 무조건 byte단위로 전달해야 한다.
    return str;                                     // void형 포인터를 반환하므로 (char *)를 붙여 형 변환을 거쳐야 한다.
}

int main(void)
{
    char *str = MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout << str << endl;
    free(str);
    return 0;
}