// 6. Person Ŭ������ ������ ������ ���� ��� Person Ŭ������ �̵� �����ڸ� �����ϴ� ������ �����ϼ���. 
#include <iostream>

using namespace std;

class Person { //Person Ŭ���� ����
    char *name;
    int id;
public:
    Person(Person&& p); //�̵� ������
};

Person::Person(Person&& p){
    this->id = p.id;
    p.id = 0;

    this->name = p.name;
    p.name = nullptr;
}