#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car                            // class에 선언한 요소들은 기본적으로 private
{                                    // struct에 선언한 요소들은 기본적으로 public
private:                             // 클래스는 구조체와 초기화 방법이 다르다.
    char gamerId[CAR_CONST::ID_LEN]; // class를 구성하는 멤버변수
    int fuelGauge;                   // 멤버변수
    int curSpeed;                    // 멤버변수

public:
    void initMembers(char *ID, int fuel); // class를 구성하는 멤버함수
    void ShowCarState();                  // 멤버함수
    void Accel();                         // 멤버함수
    void Break();                         // 멤버함수
};

void Car::initMembers(char *ID, int fuel) // 클래스 초기화를 위한 함수
{
    strcpy(gamerId, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState() // 함수의 정의를 클래스 밖으로 빼도, 이는 클래스의 일부이므로 함수 내에서는 private으로 선언된 변수에 접근이 가능하다.
{
    cout << "소유자ID: " << gamerId << "\n";
    cout << "연료량: " << fuelGauge << "%" << "\n";
    cout << "현재속도: " << curSpeed << "km/s" << "\n\n";
}

void Car::Accel()
{
    if (fuelGauge <= 0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;

    if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
    {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }

    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    if (curSpeed < CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }

    curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
    Car run99;                       // 클래스는 구조체와 초기화하는 방법이 다르다.
    run99.initMembers("run99", 100); // 이렇게 초기화해야 한다!
    run99.Accel();                   // 인자는 public 함수 -> private 변수 이렇게 클래스 내부로 전달되었다
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}