#include <iostream>

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout << "So simple function!" << std::endl;
        std::cout << "In namespace Hybrid!" << std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc; // 키워드 using을 사용하여 namespace Hybrid에 정의된 HybFunc를 호출할 때에는, namespace의 지정 없이 호출하겠다(Hybrid::를 생략하겠다)는 것을 명시하였다.
    HybFunc();             // 14행에서 명시한 대로, namespace의 지정 없이 Hybrid::가 생략된 채로 함수가 호출되었다.
    return 0;              // 이 명시는 지역변수처럼 using이 선언된 지역 내부(여기서는 main함수)에서만 유효하다.
}