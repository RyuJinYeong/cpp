#include "randint.h"
#include <random>
#include <iostream>

using namespace std;

RandInt::RandInt(int low, int high, string cn){low,high,cn;};

RandInt::~RandInt()
{
	cout << objname << "��ü �Ҹ�" << endl;
}

void RandInt::print() const
{
	random_device rd; //�õ尪�� ��� ���� random_device ����
	mt19937 gen(rd()); //random_device�� ���� ���� ���� ���� �ʱ�ȭ
	uniform_int_distribution<int> dis(low, high); //low~high ������ ���� �� ���� ����
	int value = dis(gen); //���� ������ �����Ͽ� ���� �� ������ ������ value�� ����

	cout << "Random number between " << low << " and " << high << " : " << value << endl;
}
	