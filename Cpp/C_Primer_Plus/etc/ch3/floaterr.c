/*floaterr.c --demonastrates round-off error*/
#include <stdio.h>
int main(void)
{
    float a, b;

    b = 2.0e20 + 1.0; // 오버플로우 걸리게 만듦
    a = b - 2.0e20;   // 오버플로우에서 빼주려하지만
    printf("%f\n", a);

    return 0;
}