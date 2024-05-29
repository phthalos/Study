#include <iostream>
#include <cmath>
using namespace std;
// 예상 시간복잡도: O(1)

int main(void)
{
    int n;    // int의 범위: 약±21억
    cin >> n; // 10억 이하의 자연수 n을 입력받는다.

    // 값이 자연수이면(해당 값의 정수 부분으로 나눴는데 나머지가 0이면) 1을 반환하고 아니면 0을 반환한다
    double root = sqrt(n); // 제곱근을 구한다
    double div = 0.0;
    double mod = modf(root, &div); // modf()는 root를 0.0으로 나눈 값의 소수점 부분을 반환한다.
    if (mod == 0)                  // 소수점 부분이 0이라면, n의 제곱근은 정수이므로, n은 제곱수가 된다.
        cout << 1;
    else
        cout << 0;
    return 0;
}
// 내가 생각한 다른 풀이법: n이 제곱수이다? 1만 * 1만 = 10억이므로
// 1부터 1만까지 다 제곱을 해보고 n과 같은 값이 있다면 1을 반환, 1만까지 다 돌았는데 없으면 0을 반환한다.
// 예상 시간복잡도: O(N)

// 바킹독님 코드
int func3(int N)
{
    for (int i = 1; i * i <= N; i++) // 1부터 n까지 돌면서
    {
        if (i * i == N) // i의 제곱이 n과 일치하는지 확인한다.
            return 1;
    }
    return 0;
} // 시간복잡도: O(√n)
// 굳이 1만까지 확인할 필요가 없었다...