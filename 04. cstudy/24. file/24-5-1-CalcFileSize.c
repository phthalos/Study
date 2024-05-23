#include <stdio.h>

// FILE 구조체의 포인터가 인자로 전달되면, 파일의 크기를 byte단위로 계산하여 반환하는 함수를 정의하자.
// 함수는 ftell()을 이용해서 구현해야 한다.
// 함수가 호출된 이후에도 파일 위치 지시자의 정보가 변경되어서는 안 된다. (계산 과정에서 변경되었다면 이후 되돌려 놓아야 한다)

long GetFileSize(FILE *fp)
{
    long fpos;
    long fsize;
    fpos = ftell(fp); // 파일 위치 지시자 정보 백업

    fseek(fp, 0, SEEK_END);    // EOF에서 0칸 이동
    fsize = ftell(fp);         // 파일 위치 지시자 정보 반환 (EOF의 위치가 반환됨)
    fseek(fp, fpos, SEEK_SET); // 바일 위치 지시자 정보 복구
    return fsize;
}

int main(void)
{
    char str[100];
    FILE *fp = fopen("abc.txt", "rt");

    fgets(str, 100, fp);
    fputs(str, stdout);
    printf("파일의 크기: %ld \n", GetFileSize(fp)); // 파일 위치 지시자의 변경 유무를 확인하기 위해 출력

    fgets(str, 100, fp);
    fputs(str, stdout);
    printf("파일의 크기: %ld \n", GetFileSize(fp));

    fgets(str, 100, fp);
    fputs(str, stdout);
    fclose(fp);
    return 0;
}