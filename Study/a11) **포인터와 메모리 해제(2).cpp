#include <iostream>

using namespace std;

int main() {
	//new 연산자
	/*
	어떤 데이터형을 원하는지 new 연산자에게 알려주면,
	그에 알맞는 크기의 메모리 블록을 찾아내고
	그 블록의 주소를 리턴해준다.
	*/

	int* pointer = new int; //java의 객체 생성과 유사하다.
	//cf) int* pointer = &a;

	//delete 연산자
	/*
	사용한 메모리를 다시 메모리 폴로 환수
	환수된 메모리는 프로그램의 다른 부분이 다시 사용
	new를 사용했다면 반드시 delete하여야 한다!!
	*/

	delete pointer;

	/*
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
	2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
	3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
	4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
	*/

	double* p = new double[3];
	p[0] = 0.2;
	p[1] = 0.5;
	p[2] = 0.8;

	cout << "p[1] is " << p[1] << ".\n";

	p = p + 1; //p[0]의 시작 주소가 곧 p의 주소이다. 여기서 1은 "double형 데이터를 담을 수 있는 공간 하나"를 의미한다.

	cout << "Now p[0] is " << p[0] << " and ";
	cout << "p[1] is " << p[1] << ".\n";

	p = p - 1;
	delete[] p; //[]안에를 비워놓는다.

	return 0;
}
