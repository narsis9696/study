/* 섭씨 온도를 매개변수로 전달 받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가
호출하는 프로그램을 작성하시오. 섭씨 온도로 입력할 것을 요구. 화씨온도=1.8*섭씨온도 +32.0 */
#include<iostream>

double temp_ctof(double);

int main()
{
    using namespace std;

    double temp_c, temp_f;
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
    cin >> temp_c;
    temp_f = temp_ctof(temp_c);

    cout << "섭씨 " << temp_c << "도는 화씨 "<<temp_f<<"도 입니다."<< endl;

    return 0;

}

double temp_ctof(double n)
{
    return 1.8*n + 32.0;    //아직도 헛갈린다 주의하자. 다른 변수를 이용하여 여러 계산 가능한 방법 알아보자 
}