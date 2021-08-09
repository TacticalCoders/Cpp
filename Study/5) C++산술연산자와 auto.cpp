#include <iostream>

using namespace std;

int main() {
	// + - * / %

	int a = 10;
	int b = 3;

	int c = a + b; // 13
	int d = a - b; // 7
	int e = a * b; // 30
	int f = a / b; // 3
	int g = a % b; // 1
	// % : 나머지 연산자. *부동소수점(실수)를 사용할 수 없다. 

	//c++가 복잡한 산술 연산을 수행할 수 있을까? > 있다. (연산자 우선순위, 방향 참고)
	int multiple = a + b * c;
	cout << multiple;
	 
	//auto : 자료형을 알아서 추론하여 초기화 하는 방법.
	// auto를 남발하는 것은 좋은 코딩 습관이 아니다!
	auto n = 100; 
	auto x = 1.5;
	auto y = 1.3e12L;

	return 0;
}
