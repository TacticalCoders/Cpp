#include <iostream>

using namespace std;

int main() {

	int a;
	cin >> a;

	switch (a) //정수값
	{
	case 1:
		cout << "입력하신 값은 1입니다.\n";
		break; // switch를 탈출. 
	case 2:
		cout << "입력하신 값은 2입니다.\n";
		break;
	case 3:
		cout << "입력하신 값은 3입니다.\n";
		break;
	case 4:
		cout << "입력하신 값은 4입니다.\n";
		break;
	default: //case에 없는 경우 일때 실행되는 구문. 오류를 막기 위해 꼭 default를 지정하는 것이 좋다.
		cout << "더 적은 수를 입력해주세요." << endl;
		break;
	}

	//break와 continue

	int i = 0;
	while (true) {
		if (i == 5) {
			i++;
			continue;
		}

		cout << "i의 값은 " << i << " 입니다." << endl;
		if (i >= 10)
			break;
		i++;


	}

	return 0;
}
