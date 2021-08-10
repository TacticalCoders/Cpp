#include <iostream>

using namespace std;

int main() {

	//공용체(union)
	//서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.

	union MyUnion {
		int intval;
		long longval;
		float floatval;
	};

	//열거체(enum)
	//기호 상수를 만드는 또 다른 방법.

	enum spectrum { red = 0, orage=2, yello, green, blue, violet, indigo, ultraviolet };
	/*
	1. spectrum을 새로운 데이터형 이름으로 만든다.
	2. 0에서부터 7까지의 정수 값을 각각의 원소로 나타내는 기호 상수로 만든다.
	3. 직접 상수를 지정할 수 있다.(정수만 가능!, 지정하지 않은 변수는 1씩 증가.) 
	*/

	spectrum a = red; //열거자 외에 다른 값을 대입할 수 없다.
	cout << a << endl; //0이 출력됨.

	int b = blue; //자동으로 형변환 됨.
	b = blue + 3; //산술연산도 가능. 단, 열거자들끼리의 산술연산은 불가능하다!
	cout << b << endl;

	return 0;
}
