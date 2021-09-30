#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {

public:
	Random() {
		srand((unsigned)time(0));
	}
	int next() {
		return rand();
	}

	int nextIntRange(int n, int m) {
		return (n + rand() % (m-n+1));
	}

};

int main() {
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextIntRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}