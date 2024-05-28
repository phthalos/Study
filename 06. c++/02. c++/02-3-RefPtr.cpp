#include <iostream>
using namespace std;

int main(void)
{
    int num = 12;
    int *ptr = &num;   // 포인터 변수 ptr이 numd의 주소를 참조하고 있다.
    int **dptr = &ptr; // 이중 포인터 변수 dptr이 포인터 변수 ptr의 주소를 참조하고 있다.

    int &ref = num;        // 참조자 ref이 num을 참조하고 있다. ref은 num과 동일한 메모리 주소를 참조하게 된다.
    int *(&pref) = ptr;    // 포인터 변수의 참조자 선언이다. pref는 ptr의 참조자이다. 변수 num에 저장된 값이 출력된다.
    int **(&dpref) = dptr; // 이중 포인터 변수의 참조자 선언이다. dpref는 dptr의 참조자이다. dpref->dptr->ptr->num

    cout << ref << endl;
    cout << *pref << endl;
    cout << **dpref << endl;
    return 0;
}