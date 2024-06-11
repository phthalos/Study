#include <iostream>
#include <random>
using namespace std;

int numOfVoca;
int menu;
int loop = 1;
vector<string> vocaList;
vector<string> defList;

void Init();
void Menu(vector<string> vocaList, vector<string> defList, int numOfVoca);
void Test(vector<string> vocaList, vector<string> defList, int numOfVoca);

int main(void)
{
    Init();
    return 0;
}

void Init()
{
    cout << "===== 단어 시험 프로그램 =====\n\n";
    cout << "단어의 개수를 입력하세요: ";
    cin >> numOfVoca;
    vocaList.resize(numOfVoca);
    defList.resize(numOfVoca);
    cout << "\n";
    // string vocaList[numOfVoca];
    // string defList[numOfVoca];
    cout << "암기할 단어를 입력하세요.\n";
    for (int i = 0; i < numOfVoca; i++)
    {
        cout << i + 1 << ". ";
        cin >> vocaList[i];
    }
    cout << "\n";
    cout << "단어의 의미를 입력하세요.\n";
    for (int i = 0; i < numOfVoca; i++)
    {
        cout << i + 1 << ". " << vocaList[i] << " : ";
        cin >> defList[i];
    }
    Menu(vocaList, defList, numOfVoca);
}

void Menu(vector<string> vocaList, vector<string> defList, int numOfVoca)
{
    while (1)
    {
        cout << "\n";
        cout << "----- 메뉴 -----\n\n";
        cout << "1. 단어시험 보기\n";
        cout << "2. 단어 목록 보기\n";
        cout << "3. 단어 목록 파일로 내보내기(준비중)\n";
        cout << "4. 단어 수정하기(준비중)\n";
        cout << "0. 프로그램 종료\n";
        cout << "\n";
        cout << "메뉴 번호를 입력해주세요: ";
        cin >> menu;
        cout << "\n";
        if (menu == 1)
            Test(vocaList, defList, numOfVoca);
        else if (menu == 2)
        {
            cout << "\n";
            cout << "----- 단어 목록 보기 -----\n";
            cout << "\n";
            for (int i = 0; i < numOfVoca; i++)
            {
                cout << i + 1 << ". " << vocaList[i] << " - " << defList[i] << "\n";
            }
        }
        else if (menu == 0)
        {
            cout << "\n";
            cout << "프로그램을 종료합니다.\n";
            cout << "--------------------\n";
            return;
        }
        else
        {
            cout << "\n";
            cout << "잘못된 입력입니다.\n";
        }
    }
}

void Test(vector<string> vocaList, vector<string> defList, int numOfVoca)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, numOfVoca - 1);

    int list[numOfVoca];
    int score = 0;
    bool check[numOfVoca];

    for (int i = 0; i < numOfVoca; i++)
    {
        list[i] = 1;
    }

    cout << "알맞은 단어 또는 의미를 입력하세요.\n\n";
    int i = 0;
    while (i != numOfVoca)
    {
        int num = dis(gen);
        if (num % 2 == 0 && list[num] == 1) // 의미 입력
        {
            cout << i + 1 << ". ";
            string def;
            cout << vocaList[num] << " - ";
            cin >> def;
            if (defList[num] == def)
            {
                check[num] = true;
            }
            list[num] = 0;
            i++;
        }
        else if (num % 2 != 0 && list[num] == 1) // 단어 입력
        {
            cout << i + 1 << ". ";
            string voca;
            cout << defList[num] << " - ";
            cin >> voca;
            if (vocaList[num] == voca)
            {
                check[num] = true;
            }
            list[num] = 0;
            i++;
        }
        else if (list[num] == 0)
            continue;
    }
    for (i = 0; i < numOfVoca; i++)
    {
        if (check[i] == true)
        {
            score++;
        }
        else
            continue;
    }
    cout << "\n";
    cout << "----- " << loop << " 회차 채점 결과 -----\n\n";
    cout << "점수 : " << score << " / " << numOfVoca << "\n";
    loop++;
}