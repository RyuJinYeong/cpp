#ifndef RANDINT_H
#define RANDINT_H
#include <string>
using namespace std;
class RandInt {
private:
	string objname;
	int low, high, rannum;
public:
	RandInt(int low, int high, string cn); //������
	~RandInt(); //�Ҹ���
	RandInt(const RandInt& random) = delete; //���� �����ڸ� �������� ����
	void print() const; //����, ���� ���
};
#endif