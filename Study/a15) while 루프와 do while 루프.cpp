#include <iostream>

using namespace std;

int main() {

	//while문

	string str = "happy";

	int i = 0; //for문과 달리 카운터로 사용할 변수는 while이전에 선언되어야 한다. 
	//for문과 달리 while문 외에서도 변수를 사용할 수 있다는 장점이 있다.
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}
	cout << i << endl;

	bool a = true;
	bool b = false;

	while (a) { //무한반복.
		cout << "hello" << endl;
	}

	//do while문

	int j = 0;
	do { //최소 한 번은 실행된다는 장점이 있다. 
		cout << "while문 입니다.\n";
		j++;
	} while (j<3);

	return 0;
}
