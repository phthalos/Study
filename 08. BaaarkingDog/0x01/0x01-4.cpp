#include <iostream>
#include <cmath>
using namespace std;
// 예상 시간복잡도
// 2^k <= n < 2^(k+1)이라고 할 때, O(k)이고,
// log의 정의에 입각하여 생각할 때, k는 logN이므로
// O(logN)이다.

int main(void)
{
    int n, result;
    cin >> n;
    for (int i = 1; pow(2, i) <= n; i++) // 1부터 2의 i제곱이 n과 작거나 같은 수일 때
    {
        if (result < pow(2, i)) // 2의 거듭제곱을 점점 큰 수로 교체해나간다.
            result = pow(2, i);
    }
    cout << result;
    return 0;
}

// 바킹독님 코드
int func4(int N)
{
    int val = 1;         // 2의 거듭제곱을 저장하는 변수이다.
    while (2 * val <= N) // 2의 거듭제곱이 점점 커지다가, N보다 커지는 순간 while문을 탈출하여
        val *= 2;
    return val; // 해당 거듭제곱을 반환한다.
}

// 풀이법은 비슷하지만 라이브러리나 다른 함수를 쓰지 않고도 풀이가 가능한 문제였다