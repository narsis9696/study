/*Ch2 Exercise 4*/
#include <stdio.h>
void jolly(void); // Note that In/Output are all void value
void deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
    printf("Which nobody can deny!\n");
}