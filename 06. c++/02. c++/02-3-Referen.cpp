#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 1020;
    int &num2 = num1; // num1에 대한 참조자 num2 (포인터가 아니다!!)
                      // num1과 num2는 동일한 메모리 공간을 참조하게 된다. (하나의 메모리 공간에 이름이 2개나 붙었다)
    num2 = 3047;
    cout << "VAL: " << num1 << endl;
    cout << "REF: " << num2 << endl;

    cout << "VAL: " << &num1 << endl;
    cout << "REF: " << &num2 << endl;
    return 0;
}

// int &ref = 20; (X) 참조자는 변수에 또 다른 이름을 붙이는 것이기 때문에 상수를 대상으로 선언할 수 없다.
// int &ref; (X) 미리 선언했다가 누군가를 참조할 수 없다. 참조의 대상을 바꿀 수도 없다.
// int &ref=NULL; (X) NULL로 초기화할 수 없다. (포인터 변수와 마찬가지로)

// 참조자는 무조건 선언과 동시에 변수를 참조하도록 해야 한다.