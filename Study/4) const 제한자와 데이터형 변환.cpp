#include <iostream>

using namespace std;

int main() {
	//원의 넓이를 구하는 프로그램
	//원의 넓이 = 반지름 * 반지름 * 3.14;

	int r = 3;
	float s = r * r * 3.14;
	cout << s << endl;

	//1. 바뀔 필요가 없는 수 
	//2. 바뀌어서는 안되는 수
	//-> 상수.

	const float PIE = 3.1415926535;
	//C에서는 #define PIE 3.1415926535 로 정의했다.
	//C++에서는 const 제한자를 이용한다. const float PIE = 3.1415926535;

	int r2 = 5;
	float s2 = r2 * r2 * PIE;
	cout << s2 << endl;


	//데이터형 변환

	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때
	*/

	int a = 3.141592;
	cout << a << endl;

	//강제적으로 데이터형을 변환하려면
	//typeName(a) (typeName)a
	
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << " " << static_cast<int>(ch) << endl;

	//c++
	//static_cast<typeName>

	return 0;
}
