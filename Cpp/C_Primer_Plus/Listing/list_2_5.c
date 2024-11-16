/*stillbad.c -- a program with its syntax errors(list 2.4) fixed*/
#include <stdio.h>
int main(void)
{
    int n, n2, n3;

    /*this program has a semantic error*/
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;

    printf("n= %d, n squared = %d, n cubed = %d\n", n, n2, n3);    
 // semantic error: cube -> fourth power of n

    return 0;
}