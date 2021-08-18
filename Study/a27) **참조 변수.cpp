#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);


int main() {

	//참조(reference)란?
	//미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름 (포인터와 기능 유사)
	//함수의 매개변수에 사용
	/*
	ex) 구조체의 경우 매개변수에 복사된 구조체가 전달된다. 
	    하지만 참조를 이용하는 경우 구조체의 원본을 함수의 인자로 전달 할 수 있다.
	*/

	int a;
	int& b = a; //참조연산사 '&' (데이터 형의 식별자로 기능) 

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "참조를 이용한 값의 교환\n";
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "포인터를 이용한 값의 교환\n";
	swapB(&wallet1, &wallet2);
	cout << "포인터를 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "값을 이용한 값의 교환\n";
	swapC(wallet1, wallet2);
	cout << "값을 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	return 0;
}

void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}
