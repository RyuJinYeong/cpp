#include <iostream>
#include <cstring>
using namespace std;

class Person {
 char *name;
public:
 Person() = default;
 Person(const char *n) {
    int len = strlen(n);
    this->name = new char [len+1];
    strcpy(this->name, n); 
    cout << "생성자 실행" << endl;
    n = nullptr;
};
 Person(const Person &person); //복사 생성자
 Person(Person&& p); //이동 생성자
 ~Person() {
      cout << "소멸자 실행" << endl; 
      this->name = nullptr;
};
 void show(string obj) {
    if(name == nullptr)
        cout << obj << endl; 
    else
        cout << obj << " name = "<< name << endl; 
    }
};

Person::Person(const Person &person) // 복사생성자
{
    cout << "복사생성자" << endl;
    int len = strlen(person.name);
    this -> name = new char[len+1];
    strcpy(this->name, person.name);
}

Person::Person(Person&& p) // 이동생성자
{
    cout << "이동생성자" << endl;
    this->name = p.name;
    p.name = nullptr;
}



int main() {
 cout << "-1----------" << endl;
 Person dan("daniel");
 Person ben = Person("benny");
 cout << "-2----------" << endl;
 Person mvdan = move(dan);

 cout << "-3----------" << endl;
 Person cpben = ben;
 Person cpmvdan(mvdan);
 cout << "-4----------" << endl;
 dan.show("dan");
 ben.show("ben");
 mvdan.show("mvdan");
 cpben.show("cpben");
 cpmvdan.show("cpmvdan");
 return 0;
}