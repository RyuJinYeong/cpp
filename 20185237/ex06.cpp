// 6. Person 클래스의 선언이 다음과 같은 경우 Person 클래스의 이동 생성자를 선언하는 문장을 제시하세요. 
#include <iostream>

using namespace std;

class Person { //Person 클래스 선언
    char *name;
    int id;
public:
    Person(Person&& p); //이동 생성자
};

Person::Person(Person&& p){
    this->id = p.id;
    p.id = 0;

    this->name = p.name;
    p.name = nullptr;
}