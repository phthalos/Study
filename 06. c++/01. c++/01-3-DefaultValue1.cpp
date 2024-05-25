#include <iostream>
// 매개변수의 Default Value
int Adder(int num1 = 1, int num2 = 2) // 함수 호출 시 인자를 전달하지 않으면 num1에 1이, num2에 2가 전달된 것으로 간주.
{                                     // 전달되는 인자는 왼쪽부터 채워진다. 부족분은 설정된 Default Value로 채워진다.
    return num1 + num2;
}

int main(void)
{
    std::cout << Adder() << std::endl;     // 1 + 2
    std::cout << Adder(5) << std::endl;    // 5 + 2
    std::cout << Adder(3, 5) << std::endl; // 3 + 5
    return 0;
}