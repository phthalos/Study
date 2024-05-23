#include <stdio.h>

// 현재 파일 위치 지시자 정보를 반환함 ftell()
int main(void)
{
    long fpos;
    int i;

    FILE *fp = fopen("text.txt", "wt");
    fputs("1234-", fp);
    fclose(fp);

    fp = fopen("text.txt", "rt");

    for (i = 0; i < 4; i++)
    {
        putchar(fgetc(fp));      // 문자 1개를 출력하고, 파일 위치 지시자가 1칸 뒤로 이동한다. ex)1 출력 후, 파일 위치 지시자는 2를 가리킴
        fpos = ftell(fp);        // 현재 파일 위치 지시자 정보를 fpos에 저장했다.
        fseek(fp, -1, SEEK_END); // 파일 fp의 파일 지시자를 EOF에서 왼쪽으로 1칸 이동한다. 루프 횟수에 상관없이 항상 '-'를 출력한다.
        putchar(fgetc(fp));
        fseek(fp, fpos, SEEK_SET); // fpos에 저장했던 곳으로 되돌아간다. ex) 첫 루프일 경우, 2로 돌아간다. 그리고 17행에서 다시 2를 출력한 후 지시자를 3으로 옮기고... 반복
    }
    fclose(fp);
    return 0;
}