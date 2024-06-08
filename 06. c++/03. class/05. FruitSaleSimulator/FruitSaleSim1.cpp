#include <iostream>
using namespace std;

class FruitSeller // 사과장수 객체
{
private:
    // 사과 판매가는 일정하다. 상수라는 뜻으로 대문자로 작성
    // const int APPLE_PRICE = 1000; 라고 쓰면 좋겠지만,
    //  const는 선언과 동시에 초기화되어야 함
    //  클래스의 멤버변수 선언문에서 초기화까지 하는 것은 불가능
    //  -> 아직 멤버변수의 상수화 방법을 찾지 못했으므로 지금은 일반 변수로 선언하였다.
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    int SaleApples(int money)
    {
        int num = money / APPLE_PRICE; // 구매자가 살 수 있는 사과의 개수
        numOfApples -= num;            // 사과 판매
        myMoney += money;              // 사과 값을 받음
        return num;
    }
    void ShowSalesResult()
    {
        cout << "남은 사과: " << numOfApples << '\n';
        cout << "판매 수익: " << myMoney << "\n\n";
    }
};

class FruitBuyer // 사과 구매자 객체
{
private:
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money)
    {
        myMoney = money; // 소지금
        numOfApples = 0; // 가진 사과 개수. 구입전이므로 0개
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        // FruitBuyer 객체가 FruitSeller 객체에게 메시지를 전달하는 형태로 함수를 호출한다. (Message Passing)
        numOfApples += seller.SaleApples(money); // 사과 구입. 가진 사과 개수 증가
        myMoney -= money;                        // 사과값 지불
    }
    void ShowBuyResult()
    {
        cout << "현재 잔액: " << myMoney << "\n";
        cout << "사과 개수: " << numOfApples << "\n\n";
    }
};

int main(void)
{
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0); // price, num, money

    FruitBuyer buyer;
    buyer.InitMembers(5000); // money

    buyer.BuyApples(seller, 2000); // 사과장수 seller로부터 2000원어치 사과 구매
    cout << "과일 판매자의 현황\n";
    seller.ShowSalesResult();
    cout << "과일 구매자의 현황\n";
    buyer.ShowBuyResult();

    return 0;
}