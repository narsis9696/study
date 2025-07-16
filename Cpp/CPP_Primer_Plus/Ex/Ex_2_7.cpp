/* 시간 값과 분 값의 입력을 사용자에게 요청하는 프로그램 작성. main() 함수는 이 두 값을 
void형 함수에 전달한다. */

#include<iostream>

using namespace std;
void Time(int ,int );

int main()
{
    int h,m;
    cout << "시간 값을 입력하시오: ";
    cin >> h;
    cout << "분 값을 입력하시오: ";
    cin >> m;

    Time(h,m);

    return 0;
}

void Time(int h, int m) //일부러 같은 변수 이름 재사용 문제 생길거 같은데 돌아간다.
{
    cout << "시각: " << h <<":" << m<<endl;
}