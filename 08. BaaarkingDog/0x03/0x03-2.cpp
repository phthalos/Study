#include <iostream>
using namespace std;

int checkNum[101]; // 0~100에서 어떤 숫자가 존재하는지 체크할 것이다

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;              // 숫자 x를 입력받고
        if (checkNum[100 - x]) // 그 x와 합이 100이 되는 숫자가 이전에 등장한 적이 있는지 확인한다.
            cnt++;             // 등장한 적이 있다면, 정답 쌍이 존재한다는 의미로 cnt를 1 증가시킨다.
        checkNum[x]++;         // 입력받은 숫자 x는 이제부터 존재한다고 명시한다.
    }
    if (cnt == 0) // 정답 쌍이 0개라면
        cout << 0;
    else // 정답 쌍이 1개 이상 존재한다면
        cout << 1;
}