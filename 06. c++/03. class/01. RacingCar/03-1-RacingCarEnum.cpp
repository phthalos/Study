#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum // 이 상수들은 구조체 Car에게만 의미가 있는 상수들이다.
    {    // 그래서 구조체 내에서만 유효하도록 namespace를 이용하였다.
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

struct Car
{
    char gamerId[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState(); // 함수의 기능까지 모두 넣으니, 구조체가 거대해졌다. 구조체에는 함수의 이름만 넣고, 기능은 구조체 바깥으로 뺐다.
    void Accel();
    void Break();
};

void Car::ShowCarState() // 함수를 구조체 밖으로 빼냈기 때문에, 함수를 인라인으로 처리하라는 의미는 사라졌다. 인라인의 의미를 유지하려면,
{                        // inline void Car::ShowCarState(){...}와 같이 inline이라는 키워드를 사용한다.
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

    if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
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

int main(void) // 코드가 이전보다 훨씬 깔끔해졌다.
{
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77 = {"sped77", 100, 0};
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();
    return 0;
}