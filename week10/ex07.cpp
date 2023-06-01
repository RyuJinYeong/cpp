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
//add() 함수를 작성합니다. //
Accumulator &Accumulator::add(int n){
    value += n;
    return *this;
}

int main() {
 Accumulator acc(10);
 cout << acc.get() << endl; //10 출력
 acc.add(1).add(2).add(3); //acc 객체의 value는 16이 됨. 
 cout << acc.get() << endl; //16 출력
}