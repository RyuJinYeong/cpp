#include <iostream>

using namespace std;

double sum(double a, double b,double c = 0.0)
{
    return a+b+c;
}

int main() {
 cout << "sum = " << sum(2, 6, 5) << endl;
 cout << "sum = " << sum(3.5, 5.6) << endl;
 cout << "sum = " << sum(5, 12) << endl;
}