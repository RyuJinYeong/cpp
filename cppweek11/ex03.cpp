#include <iostream>

using namespace std;

int sum(int a, int b, int c=30) {
    return a + b + c;
}

int main()
{
    cout << sum(1,2) << endl;
    cout << sum(1,2,30) << endl;
    int s = sum(1,2);
    cout << s << endl;    
}