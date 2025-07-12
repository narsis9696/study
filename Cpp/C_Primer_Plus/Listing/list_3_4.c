/*print2.c - more printf() properties*/
#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000; /*system with 32-bit int*/
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un= %u and not %d\n", un, un);                   // unsigned 과 비교
    printf("end= %hd and %d\n", end, end);                   // short과 비교
    printf("big= %ld and not %hd\n", big, big);              // long 과 short의 비교
    printf("verybig= %lld and not %ld\n", verybig, verybig); // long long과 long의 비교

    return 0;
}