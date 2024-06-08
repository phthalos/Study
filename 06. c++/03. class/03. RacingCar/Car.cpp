#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

void Car::initMembers(char *ID, int fuel)
{
    // gamerId = ID;
    strcpy(gamerId, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()
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