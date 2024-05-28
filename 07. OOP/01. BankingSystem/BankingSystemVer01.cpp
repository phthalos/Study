#include <iostream>
#include <cstring>
#define NAME_LEN 20
using namespace std;

void Menu();
void CreateAccount();
void Deposit();
void Withdraw();
void ShowBalance();

enum
{
    CREATE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

typedef struct
{
    int accountID;
    int balance;
    char cusName[NAME_LEN];
} Account;

Account accounts[100];
int accCnt = 0;

int main(void)
{

    int select;
    while (1)
    {
        Menu();
        cin >> select;

        switch (select)
        {
        case CREATE:
            CreateAccount();
            break;

        case DEPOSIT:
            Deposit();
            break;

        case WITHDRAW:
            Withdraw();
            break;

        case INQUIRE:
            ShowBalance();
            break;

        case EXIT:
            cout << "프로그램을 종료합니다." << endl;
            return 0;

        default:
            cout << "Illegal selection.." << endl;
        }
    }
    return 0;
}

void Menu()
{
    cout << "----- Menu -----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입금" << endl;
    cout << "3. 출금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
    cout << "선택: ";
}

void CreateAccount()
{
    int id;
    char name[NAME_LEN];
    int balance;

    cout << "---------------" << endl
         << "[계좌개설]" << endl;
    cout << "계좌번호: ";
    cin >> id;
    cout << "이름: ";
    cin >> name;
    cout << "입금액: ";
    cin >> balance;
    cout << endl;

    accounts[accCnt].accountID = id;
    strcpy(accounts[accCnt].cusName, name);
    accounts[accCnt].balance = balance;
    accCnt++;
}

void Deposit()
{
    int money;
    int id;
    cout << "---------------" << endl
         << "[입   금]" << endl;
    cout << "계좌번호: ";
    cin >> id;
    cout << "입금액: ";
    cin >> money;

    for (int i = 0; i < accCnt; i++)
    {
        if (accounts[i].accountID == id)
        {
            accounts[i].balance += money;
            cout << "---------------" << endl
                 << "입금 완료" << endl
                 << "현재 잔액: " << accounts[i].balance << endl
                 << endl;
            return;
        }
    }
    cout << "---------------" << endl
         << "유효하지 않은 계좌번호입니다." << endl
         << endl;
}

void Withdraw()
{
    int money;
    int id;
    cout << "---------------" << endl
         << "[출   금]" << endl;
    cout << "계좌번호: ";
    cin >> id;
    cout << "출금액: ";
    cin >> money;

    for (int i = 0; i < accCnt; i++)
    {
        if (accounts[i].accountID == id)
        {
            if (accounts[i].balance < money)
            {
                cout << "---------------" << endl
                     << "잔액이 부족합니다." << endl
                     << endl;
                return;
            }
            accounts[i].balance -= money;
            cout << "---------------" << endl
                 << "출금 완료" << endl
                 << "현재 잔액: " << accounts[i].balance << endl
                 << endl;
            return;
        }
    }
    cout << "---------------" << endl
         << "유효하지 않은 계좌번호입니다." << endl
         << endl;
}

void ShowBalance()
{
    for (int i = 0; i < accCnt; i++)
    {
        cout << "---------------" << endl
             << "계좌번호: " << accounts[i].accountID << endl;
        cout << "이   름: " << accounts[i].cusName << endl;
        cout << "잔   액: " << accounts[i].balance << endl;
    }
}
