#include "randint.h"
#include <iostream>

using namespace std;

int main() {
	cout << "20185237 ·ùÁø¿µ" << endl;

	RandInt r1{ 100, 200, "r1" };
	r1.print();
	RandInt r2(400, 600, "r2");
	r2.print();
	RandInt r3(1500, 2000, "r3");
	r3.print();
	return 0;
}