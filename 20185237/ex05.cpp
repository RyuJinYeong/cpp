//5. Person Ŭ������ ������ ������ ���� ��� Person Ŭ������ ���� �����ڸ� �����ϴ� ������ �����ϼ���. 
#include <iostream>
#include <cstring>
using namespace std;

class Person { //Person Ŭ���� ����
    char *name;
    int id;
public:
    Person(const Person& p); //���� ������
};

Person::Person(const Person& p){
    this -> id = p.id;
    
    int len = strlen(p.name);
    this -> name = new char[len+1];
    strcpy(this->name, p.name);
}


int main()
{
    
}