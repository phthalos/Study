#include <iostream>
using namespace std;

int main(void)
{
    const int num = 12;      // 상수 선언
    const int *ptr = &num;   // 포인터 변수 선언
    const int *(&ref) = ptr; // 포인터 변수를 참조하는 참조자 선언

    cout << *ptr << endl; // 포인터 변수는 주소값을 저장하였으므로 값을 표시하기 위해서 역참조한다.
    cout << *ref << endl; // 이 참조자는 포인터 변수(num의 주소값)를 참조하므로 역참조 기호를 붙여 값으로 변환한다.
    return 0;
}