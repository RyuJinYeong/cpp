#ifndef RANDINT_H
#define RANDINT_H
#include <string>
using namespace std;
class RandInt {
private:
	string objname;
	int low, high, rannum;
public:
	RandInt(int low, int high, string cn); //생성자
	~RandInt(); //소멸자
	RandInt(const RandInt& random) = delete; //복사 생성자를 생성하지 않음
	void print() const; //범위, 난수 출력
};
#endif