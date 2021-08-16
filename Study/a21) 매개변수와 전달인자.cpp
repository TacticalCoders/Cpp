#include <iostream>

using namespace std;

void helloCPP(int, int);// 함수의 원형을 제공할 때는 파라미터의 변수를 명시하지 않아도 된다.

int main() {

    int times, times2;
    cout << "정수를 입력하십시오. \n";
    cin >> times;
    cout << "정수를 한번 더 입력하십시오. \n";
    cin >> times2;
    helloCPP(times, times2); //함수를 호출할 때 넣어주는 실제적인 값을 아규먼트(argument)라고 한다. = 인수, 전달인자.

	return 0;
}

void helloCPP(int n, int m) { //함수를 정의 할 때 사용하며 함수 내에서 이용되는 변수를 파라미터(parameter)라고 한다. = 매개변수.
    for (int i = 0; i < n; i++)
        cout << "Hello\n";

    for (int i = 0; i < n; i++)
        cout << "C++\n";
}

