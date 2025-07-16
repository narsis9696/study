/* 거리에 대해서 마일 단위로 입력을 요구 하고, 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오.
단, 1마일은 1.60934킬로미터*/
#include <iostream>

int main()
{
    using namespace std;

    double Mi, Km;
    cout << "마일 거리를 입력하시오: ";
    cin >> Mi;
    Km = 1.60934 * Mi ;

    cout << Mi << " 마일의 킬로미터 환산은 " << Km << " 킬로미터 입니다." << endl;

    return 0;

}