#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class EvenRandom {

public:
	EvenRandom() {
		srand((unsigned)time(0));
	}
	int next() {
		while (true)
		{
			int n = rand();
			if (n % 2 == 0) return n;
		}
	}

	int nextIntRange(int n, int m) {
		while (true)
		{
			int x = (n + rand() % (m - n + 1));
			if (x % 2 == 0) return x;
		}
	}

};

int main() {
	EvenRandom r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextIntRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}