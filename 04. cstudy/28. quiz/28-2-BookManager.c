#include <stdio.h>
#include <stdlib.h>

typedef struct book
{
    char title[10];
    char author[30];
    int page;
} Book;

int main(void)
{
    Book *arr[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        Book *pbook = (Book *)malloc(sizeof(Book) * 1);

        printf("저자명을 입력하세요: ");
        fgets((*pbook).author, sizeof(*pbook), stdin);

        printf("도서 제목을 입력하세요: ");
        fgets((*pbook).title, sizeof(*pbook), stdin);

        printf("페이지 수를 입력하세요: ");
        scanf("%d", &((*pbook).page));

        fflush(stdin);
        arr[i] = pbook;
    }
    printf("=== 도서 목록 출력 ===\n");
    for (i = 0; i < 3; i++)
    {
        printf("저자: %s \n", (*arr[i]).author);
        printf("제목: %s \n", (*arr[i]).title);
        printf("페이지 수: %d \n", (*arr[i]).page);
    }

    for (i = 0; i < 3; i++)
    {
        free(arr[i]);
    }

    return 0;
}