#include <iostream>
using namespace std;
class Account {
 int balance; //잔액
public:
 Account(int deposit) : balance(deposit) { };
 int getBalance() { return balance; }
 void setBalance(int deposit) { this->balance = deposit; }
 void show() {
 cout << "잔액은 " << balance << "원 입니다." << endl;
 }
};
//
//increaseBy() 함수를 작성합니다. //
void increaseBy(Account &ac, int in)
{
    ac.setBalance(ac.getBalance()+in);
}

int main() {
 Account acc(500);
 cout << "입금 전 "; acc.show();
 int in;
 cout << "입금액 : "; cin >> in;
 increaseBy(acc, in);
 cout << "입금 후 "; acc.show();
}