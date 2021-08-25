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
	int getHour() { return hours; } //private인 데이터를 받아오기 위한 기법.
	int getMins() { return mins; }
	virtual void show();
	/*
	1. 기초 클래스에서 가상메서드를 선언하면, 그 함수는 기초 클래스 및 파생되는 클래스에서 모두 가상이 된다.
	2. 객체에 대한 참조를 사용하여, 객체를 지시하는 포인터를 사용하여 가상메서드가 호출되면
	   참조나 포인터를 위해 정의된 메서드를 사용하지 않고, 객체형을 위해 정의된 메서드를 사용한다. > 동적결함
	3. 상속을 위해 기초 클래스로 사용할 클래스를 정의할 때, 
	   파생 클래스에서 다시 정의해야 되는 클래스 매서드들은 가상 함수로 선언해야 한다.
	*/
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time { 

private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void show(); //NewTime에서 show가 호출되면 바로 이 매서드가 실행된다.

};

int main() {

	Time temp1(30, 2);
	NewTime temp2(3, 30, 2);

	temp1.show();
	temp2.show();

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

NewTime::NewTime() : Time() { 
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m) {
	day = d;
}



void NewTime::show() {
	std::cout << "일 : " << day << std::endl;
	std::cout << "시간 : " << getHour() << std::endl;
	std::cout << "분 : " << getMins() << std::endl;
}
