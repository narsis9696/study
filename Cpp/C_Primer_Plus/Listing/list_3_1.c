/*platinum.c == your weight in platinum*/
#include <stdio.h>
int main(void)
{
    float weight; /*user weight*/
    float value;  /*platinum equivalent*/

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    /*get input from the user*/
    scanf("%f", &weight);
    /*assume platinum is $1700 per ounce*/
    /*14.5833 converts pounds avd. to ounces troy*/
    value = 1700.0 * weight * 14.5833;
    printf("your weight in platinum is worth $%.2f.\n", value); /*소수점 둘째 자리까지 출력, %f는 지정자, .2는 변경자*/
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    
    return 0;
}