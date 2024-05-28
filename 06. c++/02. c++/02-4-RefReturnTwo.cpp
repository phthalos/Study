#include <iostream>
using namespace std;

int &RefRetFuncOne(int &ref) // 함수의 반환형이 참조형이다.
{
    ref++;
    return ref;
}

int main(void)
{
    int num1 = 1;
    int num2 = RefRetFuncOne(num1); // 참조형으로 반환된 값을 정수형 변수에 저장했다. num1 = 2, num2 = 2

    num1 += 1;   // num1 = 3, num2 = 2
    num2 += 100; // num1 = 3, num2 = 102
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    return 0;
}