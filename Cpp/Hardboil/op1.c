/*op.c*/
#include <stdio.h>
int main(void)
{
    int val1 = 4;
    int val2 = 2;

    printf("두 수의 덧셈: %d\n", val1 + val2); // 연산 먼저 진행하고 함수 호출한다.
    printf("두 수의 뺄셈: %d\n", val1 - val2);
    printf("두 수의 곱셈: %d\n", val1 * val2);
    printf("듀 수의 나눗셈: %d\n", val1 / val2);
    printf("두 수의 나머지: %d", val1 % val2);

    return 0;
}