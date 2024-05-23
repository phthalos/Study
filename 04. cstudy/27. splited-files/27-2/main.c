#include <stdio.h> // #include <> 방식으로 헤더 파일을 불러오면, C의 표준에서 정의하는, 기본적으로 제공되는 헤더파일이 저장되어 있는 디렉터리에서 파일을 찾아온다.

extern void Increment(void);
extern void GetNum(void);

int main(void)
{
#include "header1.h" // 파일 내용은 서로 잘려 있지만, 가져다 놓으면 정상적으로 실행된다. 파일의 내용을 단순히 '포함'시키는 용도일 뿐이다.
#include "header2.h" // #include "" 방식으로 헤더 파일을 불러오면, 이 문장을 포함하는 소스파일이 저장된 디렉터리(여기서는 27. splited-files 폴더)에서 헤더파일을 찾는다.
    Increment();
}