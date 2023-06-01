#include <iostream>

using namespace std;

int add(int *a, int index, int *b = nullptr)
{
    int i, n=0;

    for(i=0; i<index; i++)
    {
        n += *(a+i);        
    }

    if(b != nullptr)
    {
        for(i=0; i<index; i++)
            n += *(b+i);
    }

    return n;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c = add(a, sizeof(a)/sizeof(int));
    int d = add(a, sizeof(a)/sizeof(int), b);

    cout << c << endl; // 15 출력
    cout << d << endl; // 55 출력
}