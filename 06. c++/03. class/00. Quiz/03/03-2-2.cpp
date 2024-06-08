#include <iostream>
#include <cstring>
using namespace std;

// 문자열 정보를 내부에 저장하는 Printer라는 이름의 클래스를 디자인하자.
//  클래스의 기능: 문자열 저장, 문자열 출력
class Printer
{
    // 멤버변수: private
private:
    char str[30];
    // 멤버함수: public
public:
    void SetString(char *s);
    void ShowString();
};

void Printer::SetString(char *s)
{
    strcpy(str, s);
}

void Printer::ShowString()
{
    cout << str << '\n';
}

int main(void)
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();

    return 0;
}