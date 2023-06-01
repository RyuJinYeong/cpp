// 9. 아래에 제시된 클래스 선언과 main() 함수 그리고 실행결과를 참고하여 전달된 메시지를 출력하기위한 message_print() 함수를 작성하세요.

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