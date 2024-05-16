#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct stack
{
    int arr[MAX_SIZE];
    int top; // 스택의 꼭대기. 스택에 저장된 데이터가 아무것도 없는 상태일 때 -1이라고 선언한다.
} stack;

void createStack(stack *p);
void push(stack *p, int element);
int pop(stack *p);
void displayStack(stack *p);
void clearStack(stack *p);

int main(void)
{
    int choice, value;
    stack stk; // 구조체 변수 선언(스택 생성) 스택을 관리할 수 있는 stk라는 메모리가 생성되고, 그 안에 arr과 top이 있다

    createStack(&stk);

    while (1)
    {
        system("clear");
        system("cls");

        printf("\n\n\t\t**** 고정 크기 배열을 이용한 스택 구현 ****\n\n");
        printf("\n\n\t\t1. push    2. pop    3. print    4. clear    0. exit\n");
        printf("\t\tchoice : [ ]\b\b");
        scanf("%d", &choice);
        while (getchar() != '\n')

            switch (choice)
            {
            case 1:
                printf("\n\n\t\t정수 입력 : ");
                scanf("%d", &value);
                while (getchar() != '\n')
                    ;
                push(&stk, value);
                break;
            case 2:
                value = pop(&stk);
                if (value == -1)
                    printf("\n\n\t\tstack underflow\n");
                else
                    printf("\n\n\t\t%d pop\n", value);
                break;
            case 3:
                displayStack(&stk);
                break;
            case 4:
                clearStack(&stk);
                break;
            case 0:
                exit(0);
            }
        printf("\n\n\t\t");
        getchar();
        system("pause");
    }
    return 0;
}

void createStack(stack *p)
{
    p->top = -1; // 포인터로 구조체에 접근을 할 때는 . 이 아닌 -> 을 사용한다. 빈 스택에 대한 기본작업으로 꼭대기 -1을 생성했다.
}

void push(stack *p, int element)
{
    if (p->top == MAX_SIZE - 1) // 배열 요소가 5개라면 최대 인덱스는 4까지이므로, top의 최댓값도 5 - 1이다.
    {
        printf("\n\n\t\tstack overflow\n"); // "배열이 꽉 차서, 더 이상 저장할 공간이 없습니다!"
        return;
    }
    p->arr[++(p->top)] = element; // 스택에 들어갈 요소가 몇 번째인지를 top에 저장한다. 저장되는 요소가 1개 늘어날 때마다 top도 1씩 증가한다.
}

int pop(stack *p)
{
    if (p->top == -1) // underflow. 배열에 값이 더 이상 존재하지 않음
    {
        return -1;
    }
    // 물리적인 삭제가 아닌, 논리적인 삭제. 배열에서 실제로 값을 빼낼 수 있는 방법은 없으므로,
    return p->arr[(p->top)--]; // top의 위치를 아래층으로 변경하여 값이 삭제된 것처럼 꾸밀 뿐이다.
}

void displayStack(stack *p)
{
    int i;
    printf("\n\n\t\tstack display(LIFO) : ");
    for (i = p->top; i >= 0; i--) // 스택이 LIFO형식임을 시각적으로 표현하기 위해
        printf("%d", p->arr[i]);  // 배열 요소들도 역순으로 출력하였다.
    puts("");                     // 줄바꿈
}

void clearStack(stack *p)
{
    p->top = -1; // pop과 동일한 방식으로, 논리적으로 top의 위치를 처음 자리였던 -1로 바꾼다. 역시 배열의 값이 실제로 삭제되는 것은 아니다.
}
