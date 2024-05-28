#include <iostream>
#include <string.h>
using namespace std;

char *MakeStrAdr(int len)
{
    // char * str=(char *)malloc(sizeof(char)*len);
    char *str = new char[len]; // 복잡한 malloc()대신 new 키워드를,
    return str;
}

int main(void)
{
    char *str = MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout << str << endl;
    // free(str);
    delete[] str; // free()대신 delete 키워드를 사용할 수 있다.
    return 0;
}