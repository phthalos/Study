#include <stdio.h>

struct book
{
    char title[10];
    char author[30];
    int page;
} Book[3];

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("저자명을 입력하세요: ");
        scanf("%s", Book[i].author);

        printf("도서 제목을 입력하세요: ");
        scanf("%s", Book[i].title);

        printf("페이지 수를 입력하세요: ");
        scanf("%d", &Book[i].page);
    }
    printf("=== 도서 목록 출력 ===\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        printf("저자: %s \n", Book[i].author);
        printf("제목: %s \n", Book[i].title);
        printf("페이지 수: %d \n", Book[i].page);
    }
    return 0;
}