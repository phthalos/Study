#include <stdio.h>

int main(void)
{
    FILE *src = fopen("src.bin", "rb"); // read binary
    FILE *des = fopen("des.bin", "wb"); // write binary
    char buf[20];
    int readCnt;

    if (src == NULL || des == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }
    while (1)
    {
        readCnt = fread((void *)buf, 1, sizeof(buf), src); // fread()를 이용하여 1 x sizeof(buf) 크기만큼의 바이너리 데이터를 입력받는다.

        if (readCnt < sizeof(buf)) // 복사 실패 시 전달인자보다 작은 값이 반환된다.
        {
            if (feof(src) != 0) // 파일의 끝에 도달한 경우 0이 아닌 값 반환
            {
                fwrite((void *)buf, 1, readCnt, des);
                puts("파일복사 완료!");
                break;
            }
            else
                puts("파일복사 실패!");

            break;
        }
        fwrite((void *)buf, 1, sizeof(buf), des);
    }
    fclose(src);
    fclose(des);
    return 0;
}