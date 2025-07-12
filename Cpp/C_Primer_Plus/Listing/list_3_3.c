/*bses.c --prints 100 in decimal, octal, and hex*/
#include <stdio.h>
int main(void)
{
    int x = 100;

    printf("dec= %d; octal= %o; hex= %x\n", x, x, x);
    printf("dec= %d; octal= %#o; hex= %#x\n", x, x, x); /*대문자 %#X로 표현 가능*/

    return 0;
}