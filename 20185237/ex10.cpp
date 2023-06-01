// 10. 아래에 제시된 클래스 선언과 main() 함수를 참고하여 복사 생성자와 이동 생성자를 구현한 후 출력결과를 예측하세요. 프로그램 수행 결과와 예측 결과를 비교하세요. 
#include <iostream>
using namespace std;

class Person {
 string name;
public:
 Person() = default;
 Person(string n) : name {n} { cout << "생성자 실행" << endl; };
 Person(const Person &person) : name(person.name){ cout << "복사생성자" << endl; }; //복사 생성자
 Person(Person&& p); //이동 생성자
 ~Person() { cout << "소멸자 실행" << endl; };
 void show(string obj) { cout << obj << " name = "<< name << endl; }
};
//
//복사 생성자와 이동 생성자를 구현하세요. //

Person::Person(Person&& p) // 이동생성자
{
    cout << "이동생성자" << endl;
    this->name = p.name;
    p.name.clear();
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