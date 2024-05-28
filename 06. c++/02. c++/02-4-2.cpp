#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
        printf("Random number #%d: %d\n", i, rand() % 100); // 1이상 100미만 난수를 생성한다.
    return 0;
}