/*showf_pt.c --displays float value in two ways*/
#include <stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    double dip = 5.32e-5; /*교재는 long double 로 되어 있지만 error난다.
     mingw랑 맞지 않아서 문제 발생이라고 생각됨. double 로 하면 정상 작동한다.*/

    printf("%f can be written %e\n", aboat, aboat);
    // next line requires C99 or later compliance
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip); // 교재와 결과값이 다르다. 이유를 찾자!

    return 0;
}