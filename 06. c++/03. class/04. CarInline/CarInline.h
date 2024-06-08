#ifndef __CARINLINE_H__ // __CARINLINE_H__를 define하지 않았다면,
#define __CARINLINE_H__ // 여기부터 #endif 이전 라인까지의 코드를 포함시켜라
// 다중 파일에서 중복으로 define 되는 것을 방지하기 위함
#include <iostream>
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

class Car
{
private:
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

inline void Car::ShowCarState()
{
    cout << "소유자 ID: " << gamerID << '\n';
    cout << "연료량: " << fuelGauge << '%' << '\n';
    cout << "현재속도: " << curSpeed << "km/s" << "\n\n";
}

inline void Car::Break()
{
    if (curSpeed < CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

#endif