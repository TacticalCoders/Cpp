#include <iostream>

using namespace std;

struct Time {
	int hours;
	int mins;
};

const int minsPerHr = 60;

Time sum(Time* , Time*);
void showTime(Time);

int main() {
	//함수는 원본이 아닌 복사본을 대상으로 작업한다.

	Time day1 = { 5,45 };
	Time day2 = { 4,55 };

	Time total = sum(&day1, &day2);

	cout << "2일간 소요된 총 시간 : ";
	showTime(total);

	return 0;
}

Time sum(Time* t1, Time* t2) { //구조체의 볼륨이 큰 경우 구조체의 주소를 인자로 전달하는 것이 바람직하다.

	Time total; //합을 저장할 변수.
	total.mins = (t1->mins + t2->mins) % minsPerHr;
	total.hours = (t1->hours + t2->hours + ((t1->mins + t2->mins) / minsPerHr));

	return total; //구조체도 리턴 할 수 있다. 
}

void showTime(Time t) { //구조체는 배열과 달리 직접 구조체 변수를 인자로 전달할 수 있다. (원본이 아닌 복사본임)
	cout << t.hours << "시간, " << t.mins << "분 입니다." << endl;
}
