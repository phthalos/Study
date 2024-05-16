#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int *arr;
    int capacity;
    int top;
} stack;

void createStack(stack *pStk, int size);
void push(stack *pStk, int value);
int pop(stack *pStk);
void displayStack(stack *pStk);
void clearStack(stack *pStk);
int isEmpty(stack *pStk);
int isFull(stack *pStk);

int main(void)
{
    stack stk;
    int choice, size, value;

    printf("\nEnter a stack size : ");
    scanf("%d", &size);
    while (getchar() != '\n')
        ;
    createStack(&stk, size);
    while (1)
    {
        system("clear");
        system("cls");
        pprintf("\n\n\t\t**** 고정 크기 배열을 이용한 스택 구현 ****\n\n");
        printf("\n\n\t\t1. push    2. pop    3. print    4. clear    0. exit\n");
        printf("\t\tchoice : [ ]\b\b");
        scanf("%d", &choice);
        while (getchar() != '\n')

            switch (choice)
            {
            case 1:
                printf("\n\n\t\t정수 입력 : ");
                scanf("%d", &value);
                push(&stk, value);
                break;
            case 2:
                value = pop(&stk);
                if (value == -1)
                    printf("\n\n\t\t%d pop\n", value);
                break;
            case 3:
                displayStack(&stk);
                break;
            case 4:
                clearStack(&stk);
                break;
            case 0:
                free(stk.arr); // malloc()으로 할당된 동적 메모리는 반드시 free()로 해제해주어야 한다
                exit(0);
            }
        printf("\n\n\t\t");
        getchar();
        system("pause");
    }
    return 0;
}

void createStack(stack *pStk, int size)
{
    pStk->arr = (int *)malloc(sizeof(int) * size); // arr은 배열의 주소를 저장하므로, int*로 형변환을 거친다.
    pStk->capacity = size;                         // 사용자가 입력한 배열의 크기 값
    pStk->top = -1;
}

void push(stack *pStk, int value)
{
    if (isFull(pStk))
    {
        printf("\n\n\t\tstack overflow\n");
        return;
    }
    pStk->arr[++(pStk->top)] = value;
}

int pop(stack *pStk)
{
    if (isEmpty(pStk))
    {
        printf("\n\n\t\tstack underflow\n");
        return -1;
    }
    return pStk->arr[(pStk->top)--];
}

void displayStack(stack *pStk)
{
    int i;
    system("clear");
    system("cls");
    printf("stack display(LIFO) : ");

    if (isEmpty(pStk))
    {
        printf("\n\n\t\tstack is empty\n");
        return;
    }
    for (i = pStk->top; i >= 0; i--)
        printf("%d", pStk->arr[i]);
    puts("");
}

void clearStack(stack *pStk)
{
    pStk->top = -1;
}

int isEmpty(stack *pStk)
{
    if (pStk->top == -1)
        return 1;
    else
        return 0;
}

int isFull(stack *pStk)
{
    if (pStk->top == pStk->capacity - 1)
        return 1;
    else
        return 0;
}