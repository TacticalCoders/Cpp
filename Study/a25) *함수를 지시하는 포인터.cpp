#include <iostream>

using namespace std;

int func(int);

int main() {
	//함수를 지시하는 포인터
	//함수의 주소를 어떠한 함수에다가 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다. 

	cout << func << endl; //자료형과 매개변수를 제외한 함수명을 통해 주소를 얻을 수 있다.

	int (*pf)(int);
	pf = func;
	
	cout << (*pf)(3) << endl;  
	
	return 0;
}

int func(int n) {
	return n + 1;
}

