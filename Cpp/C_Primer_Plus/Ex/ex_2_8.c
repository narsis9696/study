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
    /*문제 영문 해석 잘못했다. 문제는 메인함수 one_three함수 two()함수 이렇게 3개만 사용하는거였다.*/
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