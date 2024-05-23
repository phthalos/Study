extern int num; // extern 지시자를 이용하여 다른 파일에 있는 변수를 가져왔다.

void Increment(void)
{
    num++;
}
int GetNum(void)
{
    return num;
}