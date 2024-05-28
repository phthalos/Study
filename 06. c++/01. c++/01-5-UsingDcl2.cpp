#include <iostream>
using std::cin; // 이름공간 std에 선언된 cin함수에 대해 이름공간 지정의 생략을 명령한다.
using std::cout;
using std::endl;

int main(void)
{
    int num = 20;
    cout << "Hello World!" << endl;
    cout << "Hello " << "World!" << endl;
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;
    return 0;
}