#include <iostream>
using namespace std;

void Increase(int &num)
{
    num++;
}

void SwapSign(int &num)
{
    num *= -1;
}

int main(void)
{
    while (1)
    {
        int num;
        cout << "정수를 입력하세요: ";
        cin >> num;

        Increase(num);
        cout << "입력된 정수의 값 1 증가: " << num << endl;

        SwapSign(num);
        cout << "입력된 정수의 부호 변경: " << num << endl;
    }
    return 0;
}