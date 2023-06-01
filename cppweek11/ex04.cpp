#include <iostream>

using namespace std;

double sum(double a=3.4, double b=6.5) {
return a + b;
}

int main()
{
    cout << sum() << endl;
    cout << sum(3.4) << endl;
    cout << sum(3.4,6.5) << endl;
    double s = sum();
    cout << s << endl;    
}