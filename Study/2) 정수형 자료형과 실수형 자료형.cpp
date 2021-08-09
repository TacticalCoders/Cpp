#include <iostream>
#include <climits> //드래그 하고 f12를 눌러보자.

using namespace std;

int main() {

	//정수형 : 소수부가 없는 수
	//음의 정수, 0 , 양의 정수
	//short, int, long, long long은 모두 정수형 데이터임. (short < int < long < long long)

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

	cout << "short는 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

	cout << "long는 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

	cout << "int는 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

	//음의 정수를 표현할 수 있는 메모리 공간을 양의 정수를 표현하는데 할당하여 표현할 수 있는 양의 정수의 크기가 약 2배가 된다.
	//음수가 필요없는 경우에 unsigned를 사용하면 보다 효율적으로 메모리를 사용할 수 있다.
	unsigned int a;
	unsigned short b; 
	unsigned long c;
	unsigned long long d;

	//실수형 : 소수부가 있는 수 

	float m = 3.14;
	int n = 3.14; //소수점 이하는 버려진다.

	cout << m << " " << n << endl;

	return 0;
}
