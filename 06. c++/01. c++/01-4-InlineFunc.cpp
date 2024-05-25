#include <iostream>
// #define SQUARE(x) ((x)*(x))
// 매크로 함수는 실행속도가 빠르지만, 복잡한 함수를 정의하기 어렵다.
// 전처리기에 의해 처리된다.

inline int SQUARE(int x) // 인라인 함수: 매크로 함수의 장점을 극대화시켰다. 몸체부분이 호출문을 대체하게 된다.
{                        // 컴파일러에 의해 처리된다.
    return x * x;        // (컴파일러가 이 함수의 inline화가 프로그램의 성능에 해가 된다고 판단할 경우, 이 키워드를 무시해버린다.)
} // (또는 임의로 inline 처리하기도 한다.)

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(12) << std::endl;
    return 0;
}