# include <iostream>

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
	Time operator+(Time&); // operator를 통해 '+'라는 연산자가  특정 연산을 수행할 수 있도록 오버로딩.
	void show();
	~Time();
};

int main() {
	//연산자 오버로딩

	//ex)*은 주소 앞에서는 주소의 값을 호출하지만, 실수 사이에 있게 되면 곱 연산자로 쓰인다. 즉, 이미 C++에는 연산자 오버로딩이 되어 있다.

	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total1;
	total1 = day1.operator+(day2); 
	total1.show();

	Time total2;
	total2 = day1 + day2; //여기서 +는 단순 덧셈이 아닌 직접 오버로딩한 함수가 실행되게 된다.
	total2.show();

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
