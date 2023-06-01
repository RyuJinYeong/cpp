#include <iostream>

using namespace std;

int calc(int a, int c,int b=5, int d=0)
{    
    return a+b+c+d;
}

int main()
{
    cout << calc(1,5); // 디폴트 매개변수는 맨 끝에 가야합니다.
}