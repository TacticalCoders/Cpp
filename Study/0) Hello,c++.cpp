#include <iostream> //전처리 지시자. 기본적으로 사용하는 함수가 포함되어 있음. C와 다른게 .h를 표기하지 않음.

/*
c++에서 함수를 사용하고자 한다면..?
반드시 그 함수의 원형을 미리 정의하여야 한다.
*/

using namespace std; //iostream에 있는 함수를 사용하기 위해선 std라는 이름이 필요함.
//만약 이 코드가 없다면 std::cout << "hello"; 와 같이 코드를 작성해야 함.

int main() {

	cout << "Hello, c++"; //cout -> ""에 있는 내용을 콘솔창에 출력 <<는 데이터의 흐름을 의미...?
	cout << "Hello, World!" << endl; //endl은 줄바꿈. 
	
	return 0;
}
