#include <iostream>
using namespace std;
class Account {
 int balance; //�ܾ�
public:
 Account(int deposit) : balance(deposit) { };
 int getBalance() { return balance; }
 void setBalance(int deposit) { this->balance = deposit; }
 void show() {
 cout << "�ܾ��� " << balance << "�� �Դϴ�." << endl;
 }
};
//
//increaseBy() �Լ��� �ۼ��մϴ�. //
void increaseBy(Account &ac, int in)
{
    ac.setBalance(ac.getBalance()+in);
}

int main() {
 Account acc(500);
 cout << "�Ա� �� "; acc.show();
 int in;
 cout << "�Աݾ� : "; cin >> in;
 increaseBy(acc, in);
 cout << "�Ա� �� "; acc.show();
}