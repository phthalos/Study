
// 다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명해보자.
int SimpleFunc(int a = 10)
{
    return a + 1;
}

int SimpleFunc(void)
{
    return 10;
}
// 함수 오버로딩이 성립하기 위해서는, 함수에 전달되는 매개변수의 자료형이 다르거나 인자의 개수가 달라야 한다.
// 오버로딩의 조건을 만족하므로 컴파일은 되지만, 인자를 하나도 전달하지 않을 경우.
// 두 함수 모두 호출조건을 만족하기 때문에 컴파일 에러가 발생한다.
// (첫 번째 함수는 Default Value가 설정되어 있어 호출되고, 두 번째 함수는 void형이므로 인자가 없어도 호출된다.)