#include <iostream>

using namespace std;
// 야매 연결 리스트
// 삭제 처리된 노드는 실제로는 삭제된 것이 아니라, 무시하고 있을 뿐이므로 프로그램이 끝날 때까지 메모리를 차지하고 있다.
// 따라서 실무에서는 사용할 수 없고, 연결 리스트의 개념을 이해하는 것을 목적으로 한다.
// 코딩테스트에서는, STL을 사용할 수 있다면 사용하는 것이 좋다.
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;
void insert(int addr, int num) // 예시: insert(0, 10) dat[0] = -1, pre[0] = -1, nxt[0] = 1
{
    dat[unused] = num;       // unused 노드에 값(num)을 넣어 새로운 노드를 생성한다.
    pre[unused] = addr;      // unused 노드의 이전에 위치할 노드의 주소값(pre[unused])은, 함수의 인자로 받아온 addr번지이다.
    nxt[unused] = nxt[addr]; // unused 노드의 다음에 위치할 노드의 주소값(nxt[unused])은, 원래 이전에 위치해 있던(unused를 삽입할 위치)노드의 바로 다음에 연결되어 있었다. 예시를 가져오면 0번지 노드의 다음에 연결되어 있던 노드(nxt[addr])(0번지 다음이라고 해서 꼭 1번지인 건 아니다. 중간에 노드의 삭제가 이루어져서 nxt[addr]은 4번지일수도, 27번지일 수도 있다.)를 unused 노드의 다음 노드로 연결하는 것.
    if (nxt[addr] != -1)
        pre[nxt[addr]] = unused; // '다음 노드(nxt[addr])'에게도, '다음 노드'의 이전 노드 주소값(pre[다음노드])은 unused 노드라고 명시해야 한다. (pre[nxt[addr]] = unused;)
    // 그런데 nxt[addr] = -1이라면, 즉, addr 노드가 마지막 노드였고, unused 노드는 맨 끝에 새로 생성하여 만드는 상황이었다면,
    // pre[-1]에 접근이 가능하게 되어버린다. -1번지에 접근하게 둘 수는 없으므로, if(nxt[addr] != -1)으로 필터링한다.
    nxt[addr] = unused; // addr번지(unused를 삽입할 위치)에게도, addr의 다음 노드는 unused라고 명시한다.
    unused++;           // unused 번지를 다 사용하였으므로 1 증가시켜 자리를 옮긴다.
    /*
    addr: 각 원소의 주소(해당 원소의 번지 수)
    새로운 원소를 생성
    새 원소의 pre값에 삽입할 위치의 주소를 대입
    새 원소의 nxt값에 삽입할 위치의 nxt값을 대입
    삽입할 위치의 nxt값과 삽입할 위치의 다음 원소의 pre값을 새 원소로 변경
    unused 1 증가


    예를 들어 원소 13이 2번지이고,
    13 뒤에 20을 추가하고 싶으면 insert(2, 20)을 호출
    13을 지우고 싶으면 erase(2)를 호출
    */
}

void erase(int addr)
{
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
    /*
    이전 노드(pre[addr])의 nxt값(nxt[pre[addr]])을 삭제할 위치의 nxt로 교체한다.
    다음 노드(nxt[addr])의 pre값(pre[nxt[addr]])을 삭제할 위치의 pre로 교체한다.
    그런데 삭제할 노드가 마지막 노드라면, 삭제할 노드의 값이 존재하지 않아, 즉 삭제할 노드의 값이 -1이 되어버리므로 (nxt[addr] = -1)
    이를 if(nxt[addr] != -1)로 필터링해야 한다.
    */
}

void traverse()
{
    int cur = nxt[0];
    while (cur != -1)
    {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test()
{
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test()
{
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}

int main(void)
{
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    insert_test();
    erase_test();
}