#include <iostream>
using namespace std;
class Accumulator {
 int value;
public:
 Accumulator(int val) : value{val} { };
 Accumulator &add(int n);
 int get() { return value; }
};
//
//add() �Լ��� �ۼ��մϴ�. //
Accumulator &Accumulator::add(int n){
    value += n;
    return *this;
}

int main() {
 Accumulator acc(10);
 cout << acc.get() << endl; //10 ���
 acc.add(1).add(2).add(3); //acc ��ü�� value�� 16�� ��. 
 cout << acc.get() << endl; //16 ���
}