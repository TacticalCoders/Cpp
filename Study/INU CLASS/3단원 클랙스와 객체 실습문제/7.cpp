#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class SelectableRandom {

	bool isEven;

public:
	SelectableRandom(int i) {
		if (i % 2 == 0) isEven = true;
		else isEven = false;
		srand((unsigned)time(0));
	}
	int next() {
		while (true)
		{
			int n = rand();
			if (isEven) {
				if (n % 2 == 0) return n;
			} 
			else {
				if (n % 2 != 0) return n;
			}
		}
	}

	int nextIntRange(int n, int m) {
		while (true)
		{
			int x = (n + rand() % (m - n + 1));
			if (isEven) {
				if (x % 2 == 0) return x;
			}
			else {
				if (x % 2 != 0) return x;
			}
		}
	}

};

int main() {
	int mode;
	cout << "짝수를 원하면 짝수를, 홀수를 원하면 홀수를 입력해주세요:";
	cin >> mode;
	SelectableRandom r1(mode);
	cout << endl << "--0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.next();
		cout << n << ' ';
	}
	cout << endl<<endl;

	cout << "짝수를 원하면 짝수를, 홀수를 원하면 홀수를 입력해주세요.";
	cin >> mode;
	SelectableRandom r2(mode);
	cout << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r2.nextIntRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}