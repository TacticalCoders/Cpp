#include <iostream>
#include <cstring> //strlen() 함수를 사용하기 위해서.
using namespace std;

int main() {

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "안녕하세요 저는 " << name2;
	cout << "입니다! 성함이 어떻게 되시나요 \n";

	//cin >> name1; //cin은 공백을 입력의 끝으로 보게 된다. 따라서 이 코드는 입력시에 정보 누락이 생길 수 있다. 그럼 공백을 포함하여 받으려면?
	cin.getline(name1, Size); //(어떤 변수에 저장할 것인지, 문자열의 크기).
	//cin.get(name1, Size); cin.get도 getline과 동일하게 동작한다.

	cout << "음 " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << "자입니다만\n";
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다.";
	cout << name2 << endl;


	//C++에서 문자열을 다루는 방법 중 하나인 string
	/*
	C스타일로 string 객체를 초기화할 수 있다.
	cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	cout을 사용하여 string 객체를 디스플레이 할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

	배열은 배열을 다른 배열에 통째로 대입할 수 없다.
	>> 하지만 string은 가능하다!!
	*/

	string str1;
	string str2 = "kang";
	str1 = str2;
	cout << str1[0] << endl;
	cout << str1 << endl;


	return 0;
}
