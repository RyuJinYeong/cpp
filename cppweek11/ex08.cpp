#include <iostream>

using namespace std;

class Test {
 public:
 inline static int cnt; // //C. static ��� ������ ���� �ܺ� ������ �ʿ� ������ �����ϴ� ������ �����ϼ���.
 static void print();
};
//B. static ��� ������ ���� �ܺ� ���� ������ �����ϼ���.
int Test::cnt = 10;

int main()
{
//A. static ��� �Լ��� ȣ���ϴ� ����� ��� �����ϼ���.
    Test::print();
    Test t;
    t.print();
}