#include <iostream>

using namespace std;

const int SIZE = 8;

inline float square(float x) { return x * x; }
int sumArr(int*, int n = 1); //디폴트 매개변수는 항상 오른쪽에 정의되어야 한다. 디폴트 매개변수 오른쪽에 값이 정의 되지 않은 자료형 오는 것은 불가능하다.

int main() {

	//인라인 함수
	/*
	일반적으로 함수의 호출은 함수의 주소로 점프하는 과정.
	인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입. -> 실행시간 단축을 위해서.
	컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
	*/

	int a = 5;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
	float b = square(a);
	cout << b << endl;


	//디폴트 매개변수
	//전달인자(argument)에 어떤 값을 넣지 않았을 때 기본으로 전달되는 값을 말한다. 
	//함수의 원형을 제공할 때 매개변수를 특정 값으로 정의하여 디폴트 매개변수를 선언할 수 있다.
  
  int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64};
  int sum = sumArr(arr); //인자를 불완하게 전달했을 때 디폴트 매개변수의 값이 인자로 들어가게 된다.
  //sumArr(arr,SIZE);를 하게 되면 일반적인 방식으로 함수가 호출된다.

  cout << "함수의 총 합은 " << sum << "입니다." << endl;

	return 0;
}

int sumArr(int* arr, int n) {
	int total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}
