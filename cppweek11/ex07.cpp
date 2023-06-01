#include <iostream>

using namespace std;

void fillLine(int n, char c='*') {
    for(int i=0; i<n; i++)  cout << c;
    cout << endl;
}

int main()
{
    fillLine(3);
}