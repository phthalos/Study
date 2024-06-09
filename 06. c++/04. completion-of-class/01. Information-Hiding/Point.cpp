#include <iostream>
#include "Point.h"
using namespace std;

// x, y는 모두 양수
bool Point::InitMembers(int xpos, int ypos)
{
    if (xpos < 0 || ypos < 0)
    {
        cout << "벗어난 범위의 값 전달\n";
        return false;
    }
    x = xpos;
    y = ypos;
    return true;
}

int Point::GetX() const
{
    return x;
}

int Point::GetY() const
{
    return y;
}

// x는 0이상 100이하
bool Point::SetX(int xpos)
{
    if (0 > xpos || xpos > 100)
    {
        cout << "벗어난 범위의 값 전달\n";
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    if (0 > ypos || ypos < 100)
    {
        cout << "벗어난 범위의 값 전달\n";
        return false;
    }
    y = ypos;
    return true;
}