#include <iostream>
using namespace std;

int &RefRetFuncOne(int &ref) // 함수의 반환형에도 참조자를 사용할 수 있다
{
    ref++;
    return ref; // ref는 지역변수와 같아서, 값을 반환하고 나면 소멸한다.
} // 따라서, 지역변수를 참조형으로 반환하는 일은 없어야 한다.
// 컴파일러는 이에 대해 에러메시지를 띄워주지는 않는다. 곧 소멸될 찌꺼기 형태의 데이터를 참조하여 결과가 정상적으로 출력되는 것처럼 보이기도 한다.
int main(void)
{
    int num1 = 1;
    int &num2 = RefRetFuncOne(num1); // 참조형으로 반환된 값을 참조자에 저장했다. (참조의 관계가 하나 더 추가됨)

    num1++; // num1 = 3, num2 = 3
    num2++; // num1 = 4, num2 = 4
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    return 0;
}