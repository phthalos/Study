#include <stdio.h>

// 텍스트 데이터를 구조체로 묶어서 파일에 입출력해보자
// 구조체 변수를 하나의 바이너리 데이터로 인식하고 처리하면 가능하다.
typedef struct fren
{
    char name[10];
    char sex;
    int age;
} Friend;

int main(void)
{
    FILE *fp;
    Friend myfren1;
    Friend myfren2;

    fp = fopen("friend.bin", "wb");
    printf("이름, 성별, 나이 순 입력: ");
    scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
    fwrite((void *)&myfren1, sizeof(myfren1), 1, fp);
    fclose(fp);

    fp = fopen("friend.bin", "rb");
    fread((void *)&myfren2, sizeof(myfren2), 1, fp);
    printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
    fclose(fp);
    return 0;
}