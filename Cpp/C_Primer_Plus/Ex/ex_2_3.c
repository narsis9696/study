/*Ch2 Exercise 3*/
#include <stdio.h>
int main(void)
{
    int age;

    age = 52;
    printf("My ages are %d years.\nNy days are %d days.\n", age, age * 365); /*ignore leap years*/
                                                                             /*문제 영문해석을 잘못해서 엉뚱한 답안이 되었디. 문제는 나이를 연단위와 일단위로 계산하여 표시해 달라는 거였다.*/
    return 0;
}