#include <iostream>
using namespace std;
class Flower {
 string name;
public:
 string getName() const { return name; }
 void setName(string name) { this->name = name; }
};
class Graden {
 Flower *f;
 int fcount;
public:
 Graden() = delete;
 Graden(int count);
 ~Graden();
 void plant(int order, string n);
 void display(void);
};

class GradenManager {
 
public:
 void status(){
     cin >> "정원에 몇 종류의 꽃을 키울 생각이신가요?" >> endl;
 }
};

int main() {
 GradenManager gm;
 gm.status();
 return 0;
}