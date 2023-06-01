#include <iostream>

using namespace std;

class Test {
 public:
 inline static int cnt; // //C. static 멤버 변수에 대한 외부 선언이 필요 없도록 선언하는 문장을 제시하세요.
 static void print();
};
//B. static 멤버 변수에 대한 외부 선언 문장을 제시하세요.
int Test::cnt = 10;

int main()
{
//A. static 멤버 함수를 호출하는 방법을 모두 제시하세요.
    Test::print();
    Test t;
    t.print();
}