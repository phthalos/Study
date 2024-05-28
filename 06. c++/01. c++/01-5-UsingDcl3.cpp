#include <iostream>
using namespace std; // 이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략을 명령한다.
// 편해보이지만, 그만큼 이름충돌이 발생할 확률은 상대적으로 높아진다.
// 무조건 편한 것을 선호하기보다는 상황을 판단해서 적절히 혼용할 수 있어야 한다.
int main(void)
{
    int num = 20;
    cout << "Hello World!" << endl;
    cout << "Hello " << "World!" << endl;
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;
    return 0;
}