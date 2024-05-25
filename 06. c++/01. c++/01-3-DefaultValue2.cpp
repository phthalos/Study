#include <iostream>
int Adder(int num1 = 1, int num2 = 2); // DefaultValue1과 동일한 결과의 예제

int main(void)
{
    std::cout << Adder() << std::endl;     // 1 + 2
    std::cout << Adder(5) << std::endl;    // 5 + 2
    std::cout << Adder(3, 5) << std::endl; // 3 + 5
    return 0;
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}