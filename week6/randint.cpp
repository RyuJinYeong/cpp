#include "randint.h"
#include <random>
#include <iostream>

using namespace std;

RandInt::RandInt(int low, int high, string cn){low,high,cn;};

RandInt::~RandInt()
{
	cout << objname << "객체 소멸" << endl;
}

void RandInt::print() const
{
	random_device rd; //시드값을 얻기 위한 random_device 생성
	mt19937 gen(rd()); //random_device를 통해 난수 생성 엔진 초기화
	uniform_int_distribution<int> dis(low, high); //low~high 사이의 난수 및 분포 정의
	int value = dis(gen); //난수 엔진을 전달하여 범위 내 생성된 난수를 value에 저장

	cout << "Random number between " << low << " and " << high << " : " << value << endl;
}
	