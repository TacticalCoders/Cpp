#include <iostream>
#define SIZE 20
using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {
	
	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; //animal은 크기가 20으로 고정된 반면 ps는 문자의 길이 만큼만 메모리를 할당 받으므로 더 효율적이다.
	strcpy(ps, animal);

	cout << "입력하신 동물 이름을 복사하였습니다." << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << "입니다. " << endl; //주소가 다르다.
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

	delete[] ps;



	//동적 구조체 생성
	//temp* ps = new temp; -> 포인터로 구조체 멤버에 접근할 때는 .이 아닌 ->를 사용한다.

	MyStruct* p = new MyStruct;
	
	strcpy(p->name, "Son");
	p->age = 29;

	cout << "p->name : " << p->name << endl;
	cout << "p->age : " << p->age << endl;

	delete p;

	return 0;
}
