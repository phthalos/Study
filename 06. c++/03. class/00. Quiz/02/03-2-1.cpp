#include <iostream>
using namespace std;

// 계산기 기능의 Calculator 클래스를 정의해 보자.
class Calculator
{
    // 멤버변수: private
private:
    int numOfAdd;
    int numOfMin;
    int numOfMul;
    int numOfDiv;

    // 멤버함수: public으로 선언하라
public:
    // 연산을 할 때마다 어떠한 연산을 몇 번 수행했는지 기록되어야 한다.
    void Init();

    // 기본 기능: 덧셈, 뺄셈, 곱셈, 나눗셈
    double Add(double a, double b);
    double Min(double a, double b);
    double Mul(double a, double b);
    double Div(double a, double b);
    void ShowOpCount();
};

void Calculator::Init()
{
    numOfAdd = 0;
    numOfMin = 0;
    numOfDiv = 0;
    numOfMul = 0;
}

double Calculator::Add(double a, double b)
{
    numOfAdd++;
    return a + b;
}

double Calculator::Min(double a, double b)
{
    numOfMin++;
    return a - b;
}

double Calculator::Mul(double a, double b)
{
    numOfMul++;
    return a * b;
}

double Calculator::Div(double a, double b)
{
    numOfDiv++;
    return a / b;
}

void Calculator::ShowOpCount()
{
    cout << "덧셈: " << numOfAdd << ' ';
    cout << "뺄셈: " << numOfMin << ' ';
    cout << "곱셈: " << numOfMul << ' ';
    cout << "나눗셈: " << numOfDiv << '\n';
}

int main(void)
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << '\n';
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << '\n';
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << '\n';
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << '\n';
    cal.ShowOpCount();

    return 0;
}
