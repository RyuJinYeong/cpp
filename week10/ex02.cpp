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
     cin >> "������ �� ������ ���� Ű�� �����̽Ű���?" >> endl;
 }
};

int main() {
 GradenManager gm;
 gm.status();
 return 0;
}