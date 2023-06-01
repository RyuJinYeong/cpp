#include <iostream>

using namespace std;

int main()
{
	int num;
	string cnt;
	cout << "10진수 입력 :" << endl;
	cin >> num;

	cout << "여러 진법으로 출력 하기 oct(8), hex(16), digit(10)" << endl;

	while(1)
	{
		cout << "해당 진법 입력 : "
		cin >> cnt;
		if(cnt == "8" || cnt == "oct")
		{
			cout << "=> 8진법 : 0" << oct << num << endl;
		}
		else if(cnt == "16" || cnt == "hex")
		{
			cout << "=> 16진법 : 0x" << hex << num << endl;
		}
		else if(cnt == "10" || cnt == "digit")
		{
			cout << "=> 10진법 :" << num << endl;
		}
		else
		{
			cout << "해당 진법이 없습니다." << endl;
			break;
		}
	}
}