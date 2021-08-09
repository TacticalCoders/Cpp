#include <iostream>

using namespace std;

int main() {

	//1. 변수란? 변할 수 있는 수
	//cf) 상수 : 변할 수 없는 수

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가(메모리 영역)?
	*/

	int a; //선언
	a = 7; //대입
	int b = 3; //초기화

	cout << "a="<< a <<", b="<< b << endl;

	cout << "&a=" << &a << ", &b=" << &b << endl;

	/*
	1. 변수명은 숫자로 시작할 수 없다.
	2. c++에서 사용하고 있는 키워드는 사용할 수 없다. ex) int return;
	3. white space를 사용할 수 없다.
	*/

	{int c;
		{
			int d;
			c = 15;
		}	
		d = 5; // 에러 발생. 변수 d는 블록 안에서만 사용할 수 있다. 
	}

	return 0;
}
