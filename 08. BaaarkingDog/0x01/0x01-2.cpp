#include <iostream>
using namespace std;
// 예상 시간복잡도: O(N^2)

int func2(int arr[], int n)
{
    for (int i = 0; i < n; i++) // 배열의 0번째부터 n-1번째 원소까지 돌아볼 것이다
    {
        for (int j = i + 1; j < n; j++) // 배열의 i의 다음번째부터 n-1번째 원소까지 돌아볼 것이다(i번째 이하는 이미 검사 완료되었으므로)
        {
            if (arr[i] + arr[j] == 100) // 만약 서로 다른 두 원소의 합이 100이라면
                return 1;               // 1을 반환하고 함수를 종료한다.
        }
    }
    return 0; // 배열을 다 돌았는데도 없으면 0을 반환하고 함수를 종료한다.
}

int main(void)
{
    int arr1[] = {1, 52, 48};
    int arr2[] = {50, 42};
    int arr3[] = {4, 13, 63, 87};
    cout << func2(arr1, 3) << endl;
    cout << func2(arr2, 2) << endl;
    cout << func2(arr3, 4) << endl;

    return 0;
}