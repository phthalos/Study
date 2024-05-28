#include <iostream>
using namespace std;

void SwapByRef(int &ref1, int &ref2) // 참조자는 선언과 동시에 변수로 초기화되어야 한다.
{                                    // 하지만 함수호출 시에는 전달되는 인자로 초기화한다.
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void)
{
    int val1 = 10;
    int val2 = 20;

    SwapByRef(val1, val2);
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    return 0;
}