/*Ch2 Exercise 5*/
#include <stdio.h>
void br(void);
void ic(void);
int main(void)
{
    br();
    printf(", "); // remember print ","
    ic();
    printf("\n"); // remember print newline
    ic();
    printf(",\n");
    br();
    printf("\n");

    return 0;
}

void br(void)
{
    printf("Barzil, Russia");
}
void ic(void)
{
    printf("India, China");
}