#include <iostream>
using namespace std;

void SwapByRef(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void)
{
    SwapByRef(23, 45); // Q. 여기서 에러가 발생하는 이유는?
    return 0;          // A. 참조자는 선언과 동시에 변수 또는 배열을 참조해야 한다. 정수와 같이 특정한 값으로 바로 초기화할 수 없어 에러가 발생했다.
} // 따라서, int num1 = 23; int num2 = 45;와 같이 변수를 먼저 선언하고, SwapByRef(num1, num2)와 같이 변수를 참조하도록 해야 한다.
// 또한, 참조자는 선언만 하거나(int &ref;) NULL로 초기화(int &ref = NULL;)할 수 없다.