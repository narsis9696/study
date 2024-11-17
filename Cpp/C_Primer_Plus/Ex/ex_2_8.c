/*Ch2 Exercise 8*/
#include <stdio.h>
void one_three(void);
void one(void);
void two(void);
void three(void); // 함수 선언 three 철자 틀려 맘춤법 오류 발생 주의!!
int main(void)
{
    printf("Staring now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void one_three(void)
{
    one();
    two();
    three();
}

void one(void)
{
    printf("one\n");
}
void two(void)
{
    printf("two\n");
}
void three(void)
{
    printf("three\n");
}