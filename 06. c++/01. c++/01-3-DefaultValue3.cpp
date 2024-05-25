#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);

int main(void)
{
    std::cout << "[3 ,3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
    // std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
    // length의 Default Value가 정해지지 않아, 인자를 하나도 전달하지 않으면 컴파일 에러로 이어진다.
    return 0;
}

int BoxVolume(int length, int width, int height)
{
    return length * width * height;
}