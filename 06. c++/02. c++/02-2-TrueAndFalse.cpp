#include <iostream>
using namespace std;

int main(void)
{
    int num = 10;
    int i = 0;

    cout << "true: " << true << endl;
    cout << "false: " << false << endl;

    while (true)
    {
        cout << i++ << ' ';
        if (i > num)
        {
            break;
        }
        cout << endl;

        cout << "sizeof 1: " << sizeof(1) << endl;         // 정수 1은 '참'을 의미하는 숫자이지만, true는 1이 아니다.
        cout << "sizeof 0: " << sizeof(0) << endl;         // 정수 0은 '거짓'을 의미하는 숫자이지만, false는 0이 아니다.
        cout << "sizeof true: " << sizeof(true) << endl;   // bool형의 데이터 크기는 1byte이다.
        cout << "sizeof false: " << sizeof(false) << endl; // true와 false는 그 자체로 '참'과 '거짓'을 나타내는 목적으로 정의된 데이터이다.
        return 0;
    }
}