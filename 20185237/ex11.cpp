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
    cout << "������ ����" << endl;
    n = nullptr;
};
 Person(const Person &person); //���� ������
 Person(Person&& p); //�̵� ������
 ~Person() {
      cout << "�Ҹ��� ����" << endl; 
      this->name = nullptr;
};
 void show(string obj) {
    if(name == nullptr)
        cout << obj << endl; 
    else
        cout << obj << " name = "<< name << endl; 
    }
};

Person::Person(const Person &person) // ���������
{
    cout << "���������" << endl;
    int len = strlen(person.name);
    this -> name = new char[len+1];
    strcpy(this->name, person.name);
}

Person::Person(Person&& p) // �̵�������
{
    cout << "�̵�������" << endl;
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