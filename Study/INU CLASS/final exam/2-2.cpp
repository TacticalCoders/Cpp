//상속을 사용하여 Queue를 구현하는 문제.

#include <iostream>

using namespace std;

class BaseArray {
private:
	int capacity; //동적할당된 메모리 용량
	int* mem; //배열을 가리킬 포인터.
protected:
	BaseArray(int capacity = 100) { 
		this->capacity = capacity;
		mem = new int[capacity]; //배열 동적할당.
	}
	~BaseArray() { delete[] mem; } //동적할당 했으므로 메모리를 반환해주어야 한다. 
	void put(int index, int val) { mem[index] = val; } //특정 인덱스에 val넣기.
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
	int head, tail; 
	int size; //현재 큐 안에 있는 데이터 개수.
public:
	MyQueue(int capacity);
	void enqueue(int n);
	int dequeue();
	int capacity(); //전체 용량
	int length(); //들어있는 길이
};

MyQueue::MyQueue(int capacity) : BaseArray(capacity) {
	head = 0; //맨 상단을 의미, 제일 마지막에 나가는 값.
	tail = -1; //맨 하단, 제일 먼저 나가는 값.
	size = 0; //원소의 개수.
}

void MyQueue::enqueue(int n) {
	if (size == capacity()) 
		return; //큐 가득참.
	put(head, n);
	head++;
	size++;
}

int MyQueue::dequeue() {
	if (size == 0)
		return -1;
	size--;
	tail++; //맨 밑에 것이 나갔으므로 ++해줘야 한다. 
	return get(tail);
}

int MyQueue::capacity() {
	return getCapacity();
}

int MyQueue::length() {
	return size;
}

int main() {
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라 >>";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다.>>";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; //큐에서 제거하여 출력
	}
	cout << endl << "큐의 현재 크기: " << mQ.length() << endl;
}
