#include "Car.h"

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