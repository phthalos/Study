#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point; // '구조체(struct) point'에 'Point'라는 별명을 붙였다.(typedef)

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
} Person; // 'struct person{...}'에 'Person'이라는 별명을 붙였다.(typedef)

int main(void)
{
    Point pos = {20, 20};                         // typedef를 이용하여 붙인 별명은 그대로 사용 가능하다. Point = struct point
    Person man = {"이승기", "010-1212-0001", 21}; // Person = struct person
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %s \n", man.name, man.phoneNum, man.age);
    return 0;
}
