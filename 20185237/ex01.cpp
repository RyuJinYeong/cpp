#include <iostream>
#include <string>
using namespace std;

struct Entry {
 string name;
 int age;
};

Entry read_entry() {
 string s="benny";
 int i=24;
 return {s, i};
}

int main() {
    Entry t = read_entry();
    string n = t.name;
    int a = t.age;

    //auto [n,a] = read_entry();
    cout << n << a << endl;
}