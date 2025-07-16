/* 거리를 매개변수로 전달받아 천문 단위로 환산하여 리턴하는 사용자 정의 함수를 
main() 함수가 호출하는 프로그램 작성. 거리는 광년으로 입력할 것 요구. 1광년 = 63240 천문 단위 */
#include <iostream>

double d_ly(double);

int main()
{
    using namespace std;

    double ly;
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin >> ly;

    cout << ly << " 광년은 " << d_ly(ly) << " 천문 단위입니다." << endl;
    return 0;
}

double d_ly(double n)
{
    return 63240*n;
}