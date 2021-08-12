#include <iostream>

using namespace std;

int main() {
	//지능적으로 프로그래밍 한다는 것? -> 프로그램에게 의사결정권을 주는 것. ex) 반복, 조건

	//분기 구문 : if 구문. 
	
	if (false) { //if와 else는 하나의 코드 블록으로 해석된다. 
		cout << "#1" << endl;
	}
	else if(true) {
		cout << "#2" << endl;
	}
	else {
		cout << "#3" << endl;
	}
	return 0;
}
