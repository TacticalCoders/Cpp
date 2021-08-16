#include <iostream>

using namespace std;

void countDown(int);

int main() {
	//재귀호출 : C++에서 함수는 자기 자신을 호출할 수 있다.

	/*
    void recurs (argumentList){
      code#1
      if (condition)
        recurs(argumentList);
      code#2 <- 재귀호출이 연쇄적으로 일어나고 있는 동안에는 실행되지 않는다!!!!!!!!
	}
	*/

	countDown(5);

	return 0;
}

void countDown(int n) {
	cout << "Counting..." << n << endl;
	if (n > 1)
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}
