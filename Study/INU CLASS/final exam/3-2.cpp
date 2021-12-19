//벡터 문제. 단, 포인터를 곁들인.

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it;// 벡터 v의 원소에 대한 포인터 it. iterator는 반복자. 자료 구조의 내부의 요소를 순회(traversing)하는 객체이다.

	for (it = v.begin(); it != v.end(); it++) { //벡터 전체를 반복할 때는 begin과 end를 사용.
		int n = *it;
		n = n * 2;
		*it = n;
	}

	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;
}
