/*charcode.c-displays code number for a character*/
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);                           /*user input character*/
    printf("The code for %c is %d.\n", chA, ch); // ASCII 코드 이용

    return 0;
}