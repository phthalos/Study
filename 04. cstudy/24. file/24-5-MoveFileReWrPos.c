#include <stdio.h>

// 파일 위치 지시자 이동시키기 fseek()
int main(void)
{
    // 파일 생성
    FILE *fp = fopen("text.txt", "wt");
    fputs("123456789", fp);
    fclose(fp);

    // 파일 개방
    fp = fopen("text.txt", "rt");

    // SEEK_END test
    fseek(fp, -2, SEEK_END); // fp의 EOF에서부터 왼쪽으로 2만큼 이동이 시작된다
    putchar(fgetc(fp));

    // SEEK_SET test
    fseek(fp, 2, SEEK_SET); // fp의 처음부터 오른쪽으로 2만큼 이동이 시작된다. 1에서부터 2칸 이동하여 3을 가리킨다
    putchar(fgetc(fp));     // 3을 출력하며 파일 위치 지시자는 4를 가리키게 된다.

    // SEEK_CUR test
    fseek(fp, 2, SEEK_CUR); // 현재 위치인 4에서 뒤로 2칸을 이동시킨다. 파일 위치 지시자는 6을 가리킨다.
    putchar(fgetc(fp));     // 6을 출력한다.
    return 0;
}