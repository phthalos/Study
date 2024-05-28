#include <iostream>
using namespace std;

int num = 20 + 30;
// literal constant (리터럴 상수)
// 20, 30은 덧셈연산을 위해 임시적으로 메모리에 저장된 값이다. 다음 행으로 넘어가면 소멸하므로, 재참조가 불가능하다.

const int &ref = 30;
// const 키워드로 인해 30은 '임시변수'라는 메모리 공간에 저장되어 참조자가 참조할 수 있게 된다.
// (임시변수에는 30이 저장되어 있고, 참조자 ref는 임시변수를 참조한다.)

int Adder(const int &num1, const int &num2)
{
    return num1 + num2;
}
cout << Adder(3, 4) << endl;
// 이러한 형태로, const를 이용한 임시변수의 생성을 통해 상수참조를 허용하고, 함수를 간단히 호출할 수 있게 되었다.