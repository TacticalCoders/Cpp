#include <iostream>

using namespace std;

int main() {

	//구조체 : 다른 데이터형이 허용되는 데이터의 집합.
	//cf)배열 : 같은 데이터형의 집합.

	//왜 필요한가? ex)축구선수
	struct MyStruct
	{
		string name; //멤버(구성요소)
		string position;
		float height;
		float weight;
	}C; //구조체 선언과 동시에 구조체 변수를 선언할 수 있다. 

	MyStruct A; //구조체는 변수처럼 선언할 수 있다.
	A.name = "Son"; //.을 통해 구조체의 멤버에 접근할 수 있다.
	A.position = "Wing";
	A.height = 183.3;
	A.weight = 75.8;

	MyStruct B = {
		"Park",
		"mid",
		178.5,
		70.4
	};

	C = { //모든 값을 기입하지 않아도 된다. 빈 값들은 0으로 저장된다.

	};

	MyStruct D[2] = { //구조체의 배열도 선언할 수 있다. 
		{"a","b",1,2},
		{"c","d",3,4}
	};

	D[0].position = "CB";
	D[1].height = 183.5;

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	cout << B.name << endl;
	cout << B.position << endl;
	cout << B.height << endl;
	cout << B.weight << endl;

	cout << C.name << endl;
	cout << C.position << endl;
	cout << C.height << endl;
	cout << C.weight << endl;

	cout << D[0].name << endl;
	cout << D[0].position << endl;
	cout << D[0].height << endl;
	cout << D[0].weight << endl;

	cout << D[1].name << endl;
	cout << D[1].position << endl;
	cout << D[1].height << endl;
	cout << D[1].weight << endl;

	return 0;
}
