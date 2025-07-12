/*typesize.c -- prints out type sizes*/
#include <stdio.h>
int main(void)
{
    /* c99 provides a %zd specifier for sizes*/
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    /*long double의 결과값은 원래 16 바이트이나 mingw의 문제로 12바이트로 표기된다 */

    return 0;
}