#include <iostream>

void MyFunc(void) // C++은 함수 호출 시 전달되는 인자를 통해 호출하고자 하는 함수의 구분이 가능하다. C언어는 함수의 이름만으로 구분한다.
{                 // 매개변수의 형태가 다르고, 동일한 이름의 함수를 선언하는 것을 함수 오버로딩(Function Overloading)이라고 한다.
    std::cout << "MyFunc(void) called" << std::endl;
}
void MyFunc(char c) // Overloading이 가능하려면, 매개변수의 자료형 또는 전달인자의 개수가 달라야 한다.
{                   // 함수의 반환형만 다른 것은 컴파일 오류로 이어진다.
    std::cout << "MyFunc(char c) called" << std::endl;
}
void MyFunc(int a, int b)
{
    std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);
    return 0;
}