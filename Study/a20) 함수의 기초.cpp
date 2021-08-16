	/*
	1. 함수의 정의 제공
	2. 함수의 원형 제공
	3. 함수 호출
	*/

	/*
	1.리턴값이 있는 경우

	typeName functionName(parameterList)
	{
		statement(s)
		return value; //C++에서는 배열을 제외한 모든 자료형을 리턴할 수 있다.(리턴 후에 종료)
	}

	2.리턴값이 없는 경우
	void functionName(parameterList)
	{
		statement(s);
		return; // 생략될 수 있음
	}
	*/

#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n); //함수의 원형 제공.
float circle(int r);

int main() {

	cheers(5);
	int r = 5;
	cout << "반지름이 " << r << "인 원의 넓이는 " << circle(r) << endl;

	return 0;
}

//함수 정의 제공
void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
	//return;
}

float circle(int r) {
	return r * r * PIE;
}
