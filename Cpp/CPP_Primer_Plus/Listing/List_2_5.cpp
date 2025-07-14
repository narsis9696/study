// ourfunc.cpp -- 사용자가 작성하는 함수를 정의한다.
#include <iostream>
void simon(int);    // simon() 을 위한 함수 원형

int main()
{
    using namespace std;
    simon(3);   //simon() 함수를 호출한다
    cout << "정수를 하나고르시오: ";
    int count;
    cin >> count;
    simon(count);   //simon() 함수를 다시 호출한다
    cout <<"끝!" <<endl;
    return 0;
}

void simon(int n)   //simon() 함수를 정의한다
{
    using namespace std;
    cout << "Simon 왈, 발가락을 " <<n<< "번 두드려라." <<endl; // 일부러 화이트스페이스 안주고 변수 n을 적었다
}   //void형 함수에느 return 구문이 필요 없다