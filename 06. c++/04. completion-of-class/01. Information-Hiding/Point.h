#ifndef __POINT_H_
#define __POINT_H_

class Point
{
    // public으로 사용할 경우 문법적으로는 문제가 없지만, 프로그램에서의 실수가 발생할 수 있다.
    // 제한된 방법으로의 접근만 허용하여, 임의의 잘못된 값이 저장되지 않도록 방지한다. (x와 y라는 정보를 은닉함)
    // 실수를 쉽게 발견할 수 있도록 한다.
private:
    int x;
    int y;

public:
    bool InitMembers(int xpos, int ypos);
    int GetX() const; // 이 함수 내에서는 멤버변수(매개변수, 지역변수 아님!!)에 저장된 값을 변경하지 않겠다
    int GetY() const; // const 함수 내에서는 const가 아닌 함수의 호출이 제한된다
    bool SetX(int xpos);
    bool SetY(int ypos);
};

#endif