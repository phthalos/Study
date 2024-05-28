#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
    Simple()
    {
        cout << "I'm simple constructor!" << endl;
    }
};

int main(void)
{
    cout << "case 1: ";
    Simple *sp1 = new Simple; // new 연산자를 이용해서 힙 영역에 변수를 할당하고 있다.

    cout << "case 2: ";
    Simple *sp2 = (Simple *)malloc(sizeof(Simple) * 1); // malloc()을 통해서 힙 영역에 변수를 할당하고 있다.

    cout << endl
         << "end of main" << endl;
    delete sp1;
    free(sp2);
    return 0;
} // new와 malloc()의 동작방식에는 차이가 있다.