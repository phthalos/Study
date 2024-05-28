## 1. 키워드 `const`의 의미

```c
const int num = 10;
// 변수 num을 상수화한다.

const int * ptr1 = &val1;
// 포인터 ptr1을 이용해서 val1의 값을 변경할 수 없다.

int * const ptr2 = &val2;
// 포인터 ptr2가 상수화된다.

const int * const ptr3 = &val3;
// 포인터 ptr3가 상수화 되었으며,
// ptr3을 이용해서 val3의 값을 변경할 수 없다.
```

<br>

## 2. 실행중인 프로그램의 메모리 공간

| 메모리 영역     | 의미                                                                                          |     |
| --------------- | :-------------------------------------------------------------------------------------------- | --- |
| `data`          | 전역변수가 저장되는 영역                                                                      |
| `stack`         | 지역변수 및 매개변수가 저장되는 영역                                                          |
| `heap`          | malloc() 호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이루어지는 영역             |
| `malloc & free` | malloc() 호출에 의해 할당된 메모리 공간은 free() 호출을 통해 소멸하지 않으면 해제되지 않는다. |

<br>

## 3. Call-by Value vs. Call-by-Reference

```c
void SwapByValue(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
} // Call-by-Value
  // 값을 인자로 전달하는 함수의 호출방식
  // 복사된 값이므로, 원본 값은 변경되지 않는다.
```

```c
void SwapByRef(int * ptr1, int * ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
} // Call-by-Reference
  // 주소값을 인자로 전달하는 함수의 호출방식
  // 주소값을 전달받아서, 함수 외부에 선언된 변수에 접근하는 형태의 함수호출
  // 원본의 주소값이 전달되었으므로, 원본 값을 변경할 수 있다.
```
