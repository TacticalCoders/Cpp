#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int[], int);
int sumArr2(int*, int);
int sumArr3(int*, int*);

int main() {

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	cout << "size of arr " << sizeof arr << endl; //32

	int sum = sumArr(arr, SIZE); 
	// arr(주소) == &arr[0] == arr[](인자로 사용할 수 없다. 오직 매개변수에서만 사용가능.)  
	cout << "배열의 총 합은 " << sum << "입니다." << endl;

	int sum2 = sumArr2(arr, SIZE);
	cout << "배열의 총 합은 " << sum << "입니다." << endl;

	int sum3 = sumArr3(arr, arr + SIZE); //배열의 마지막 원소는 arr + SIZE - 1이다. 
	cout << "배열의 총 합은 " << sum << "입니다." << endl;

	return 0;
}

int sumArr(int arr[], int n) { 

	cout << "size of arr " << sizeof arr << endl; //4, 배열의 첫번째 원소의 주소를 의미하기 때문, 따라서 배열의 크기를 매개변수로 받은 것임.

	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total; 
}

int sumArr2 (int* arr, int n) {

	cout << "size of arr " << sizeof arr << endl; 

	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
}

int sumArr3(int* begin, int *end) {

	cout << "size of arr " << sizeof *begin << endl;

	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++) {
		total += *pt;
	}

	return total;
}
