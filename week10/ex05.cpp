//5. Person 클래스의 선언이 다음과 같은 경우 Person 클래스의 복사 생성자를 선언하는 문장을 제시하세요. 
#include <iostream>
#include <cstring>
using namespace std;

class Person { //Person 클래스 선언
    char *name;
    int id;
public:
    Person(const Person& p); //복사 생성자
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