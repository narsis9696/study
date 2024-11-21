/*showf_pt.c --displays float value in two ways*/
#include <stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    // next line requires C99 or later compliance
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip); // 교재와 결과값이 다르다. 이유를 찾자!

    getchar(); // 결과값 이상해서 확인차 입력했음

    return 0;
}