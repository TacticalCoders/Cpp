#include <iostream>

using namespace std;

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) { //직접적으로 private에 접근하고 있지 않기 때문에 굳이 friend를 사용할 필요가 없지만, 이 함수가 클래스의 인터페이스가 되므로 friend를 사용한다.
		return t * n; // 멤버함수 operator* 가 실행된다. 
	}
};


int main() {
	//C++ friend 
	//어떤 함수를 이용하여 특정 클래스의 private 멤버에 접근하려면? -> friend

	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1; //t2 = operator*(3,t1);
	//t1 * 3은 동작하지 않는다. 이 문제를 해결하려면? operator*를 friend가 아닌 클래스의 멤버 함수로 정의한다.


	return 0;
}

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
};

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
};

Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};

void Time::show() {
	std::cout << "시간 : " << hours << std::endl;
	std::cout << "분 : " << mins << std::endl;
}

Time::~Time()
{
}

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
