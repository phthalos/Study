#include <iostream>

int main(void)
{
    while (1)
    {
        int sale, salary;
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> sale;
        if (sale == -1)
        {
            std::cout << "프로그램을 종료합니다.";
            break;
        }
        salary = 50 + sale * 0.12;
        std::cout << "이번 달 급여: " << salary << "만원" << std::endl;
    }
    return 0;
}