#include <iostream>

using namespace std;

int main() {
  
	//char : 작은 문자형. C++은 아스키코드를 사용함. -> 아스키코드로 되어있는 한가지 문자를 표현하는 자료형.
	int a = 77;
	char b = a;
	cout << b << endl; //M이 출력됨. 즉 M은 아스키코드에서 77임을 알 수 있다. 

	char c = 'a'; //작은 따옴표를 사용한다. c++은 큰 따옴표를 지원하지 않는다.
	cout << c << endl;

	// null 문자 '\0' -> 문자열에서 문자열의 종료를 의미함.
	// " " 큰 따옴표는 명시적으로 null문자가 포함되어 있음. "a"는 사실상 a\0 인 것임. 따라서 char에서 큰 따옴표는 사용불가능하다.


	//bool : 0 혹은 1. 0은 false 1은 true. 0이외에 모든 수는 1로 저장이 된다.
	bool x = 0;
	bool y = 1;
	bool z = 10;

	cout << x << " " << y << " " << z << endl; // 0 1 1이 출력됨.

	return 0;
}
