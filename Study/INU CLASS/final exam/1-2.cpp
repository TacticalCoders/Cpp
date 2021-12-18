#include <iostream>

using namespace std;

class Stack {
	int size;
	int* mem;
	int tos;
public:
	Stack(int size = 10) {
		this->size = size;
		mem = new int[size]; //�����Ҵ�
		tos = -1; //������ �������.
	}
	~Stack() { delete[] mem; } //�����迭 �޸� ��ȯ.
	Stack& operator << (int n); //push
	Stack& operator >> (int& n);//pop
	bool operator ! (); //������ ����ִ°�.
};

Stack& Stack::operator << (int n){
	if (tos == size - 1) {
		return *this;
	}
	tos++;
	mem[tos] = n;
	return *this;
}

Stack& Stack::operator >> (int& n) {
	if (tos == -1) {
		return *this;
	}
	n = mem[tos];
	tos--;
	return *this;
}

bool Stack::operator ! () {
	if (tos == -1)
		return true;
	else
		return false;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}