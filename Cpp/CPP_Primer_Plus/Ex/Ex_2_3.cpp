// main() 함수 포함 사용자 정의 함수 3개를 이용해서 문장 출력하기 

#include <iostream>

using namespace std;

void tbm();
void shtr();

int main()

{
    tbm();
    tbm();
    shtr();
    shtr();

    return 0;
}

void tbm()
{
    cout << "Three blind mice"<<endl;
}

void shtr()
{
    cout << "See how they run" << endl;
}