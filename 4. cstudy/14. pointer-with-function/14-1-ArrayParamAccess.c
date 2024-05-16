#include <stdio.h>

void showArayElem(int* param, int len) // 함수의 인자로 배열을 직접 전달하는 방법은 없다. 전달해야 한다면, 배열의 주소값을 가리키는 포인터 변수를 이용한다.
{                                      // 즉, int* param 과 int param[] 은 완전히 동일한 선언이다.
    int i;
    for(i=0; i<len; i++)
        printf("%d ",param[i]); // 함수 내부에서의 접근 방식. 포인터 변수는 배열형태로 접근할 수 있으므로 이를 이용한다.
    printf("\n");
}

void AddArayElem(int* param, int len, int add)
{
    int i;
    for(i=0; i<len; i++)
        param[i] += add; // 포인터 변수를 이용하여, 배열의 메모리 공간에 접근하고 값을 변경하는 것도 가능하다.
}

int main(void)
{
    int arr[3] = {1,2,3};
    AddArayElem(arr, sizeof(arr) / sizeof(int), 1); // 배열의 길이를 계산 후 전달해주는 이유는,
    showArayElem(arr, sizeof(arr) / sizeof(int));   // 함수 내에서는 인자로 전달된 배열의 길이를 계산할 수 없기 때문이다.
                                                    // 배열의 주소 값을 인자로 전달받는 매개변수=포인터변수이므로 
    AddArayElem(arr, sizeof(arr) / sizeof(int), 2); // 이를 대상으로 sizeof연산을 시도할 경우 '배열의 크기'가 아닌
    showArayElem(arr, sizeof(arr) / sizeof(int));   // '포인터 변수의 크기'가 반환된다.
    
    AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
    showArayElem(arr, sizeof(arr) / sizeof(int));
    return 0;
}