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
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time { //클래스 선언후, 접근지정자 수퍼클래스명을 적으면 상속을 할 수 있다.

	/*
	1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장된다.
	2. 파생 클래스형의 객체는 기초 클래스형의 매서드들을 사용할 수 있다.
	3. 파생 클래스는 자기 자신의 생성자를 필요로 한다.
	4. 파생 클래스는 부가적인 데이터 멤버들과 멤버함수들을 임의로 추가할 수 있다.
	*/
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void print();

};

int main() {

	/*
	1. 기존의 클래스에 새로운 기능을 추가할 수 있다.
	2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가할 수 있다.
	3. 클래스 매서드가 동작하는 방식을 변경할 수 있다.
	*/

	NewTime temp1();
	NewTime temp2(3, 30, 2);
	temp2.print();

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

std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "시간 " << t.mins << "분";
	return os;
}

NewTime::NewTime() : Time() { // : Time()을 통해 수퍼클래스의 private 멤버를 초기화 할 수 있다.
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m) {
	day = d;
}

void NewTime::print() {
	std::cout << "일 : " << day << std::endl;
	show();
}
