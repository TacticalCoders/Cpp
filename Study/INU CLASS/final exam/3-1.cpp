//템플릿 문제. 

#include <iostream>

using namespace std;

template <class T>
T add(T data[], int n) { //T가 뭐가 될지는 모르지만 배열임. T를 반환하는 함수 add;
	T sum = 0; 
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum;
 }

int main() {
	int x[] = { 1,2,3,4,5 }; //T는 int
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 }; //T는 double 
	cout << "sum of x[] = " << add(x, 5) << endl;
	cout << "sum of d[] = " << add(d, 6) << endl;
} 
