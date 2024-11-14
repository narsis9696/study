/*op3.c*/
#include <stdio.h>

int main(void)
{
    int val1 = 2;
    int val2 = -4;

    val1 = -val1; // val1-=val1과 혼동 하지 말자.
    printf("val1=-val1 연산 이후 val1은 %d\n", val1); //특수문자(예: \n) 랑 서식문자(예: %d) 혼동하지 말자

    val2 = -val2;
    printf("val2=-val2 연산 이후 val2은 %d\n", val2);

    return 0;
}