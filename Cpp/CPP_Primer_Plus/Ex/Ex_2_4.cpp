// 사용자의 나이를 입력 받아 그 나이의 월수로 화면에 출력

#include <iostream>

int main ()
{
    using namespace std;

    cout << " Enter your age : ";

    int ages; // 변수를 두개로 한다면 에러 발생할 수 있다
    
    cin >> ages; // 변수를 두개로 하면 먼저 ages변수를 입력을 받고 계산식을 넣어 두번째 변수에 입력해야 된다

    cout<< "당신의 나이를 월수로 나타낸다면 " << 12 * ages << " 입니다." << endl;

    return 0 ;
}