#include <iostream>

//추상화와 클래스

//추상화란?
//어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것.

//클래스란? -> 추상화를 사용자 정의 데이터형으로 변환해주는 수단.
/*
클래스의 구성
1. 클래스 선언
2. 클래스 메서드 정의
*/

using namespace std;

class Stock
{
private: //private에 있는 변수들의 값에 접근하려면 반드시 public의 매서드를 통하여야 한다. -> 데이터 은닉.
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock(); //생성자
	~Stock(); //파괴자
};

//사용 범위 결정 연산자 ::
void Stock::acquire(string co, int n, float pr) { // :: <- Stock클래스에 속하는 함수임을 알려줌.
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
}

Stock::Stock() {
}

Stock::~Stock()
{

}

int main(){

	//데이터형이란 무엇인가? -> 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?
	//클래스를 통해 하나의 데이터형을 만들 수 있음. -> 클래스를 통해 특정 연산을 수행할 수 있음.

	Stock temp; //변수와 같이 선언.
	temp.acquire("Panda", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();
	
	return 0;
}
