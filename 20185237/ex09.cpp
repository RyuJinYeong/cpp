// 9. �Ʒ��� ���õ� Ŭ���� ����� main() �Լ� �׸��� �������� �����Ͽ� ���޵� �޽����� ����ϱ����� message_print() �Լ��� �ۼ��ϼ���.

#include <iostream>
#include <string>
using namespace std;


void message_print(string &&str){
    cout << "message : " << str << endl;
}

int main() {
 string stra = "apple";
 string strb = "banana";
 message_print(move(stra));
 message_print(stra + strb);
 return 0;
}