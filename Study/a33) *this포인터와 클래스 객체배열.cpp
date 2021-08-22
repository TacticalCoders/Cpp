#include <iostream>

using namespace std;

class Stock
{
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	Stock();
	Stock(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	Stock& topval(Stock&); //두 객체중 가격이 더 큰 객체를 반환, 매개변수에는 & 참조 연산자가 들어간 것을 볼 수 있다.
	void show();
	~Stock();
};

int main() {

	Stock s[4] = { //일반적인 배열과 비슷하다.
		Stock("A", 10, 1000), //생성자와 ,를 통해 생성.
		Stock("B", 20, 1200),
		Stock("C", 20, 1300),
		Stock("D", 20, 1400)
	};
	
	Stock *first = &s[0]; //가장 큰 객체를 찾는 알고리즘.
	for (int i = 1; i < 4; i++)
		first = &first->topval(s[i]);

	first->show(); //포인터이므로 ->를 사용함.

	return 0;
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
Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this;
}



Stock::Stock(string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock()
{
	
}

#include "Stock.h"

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
Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this; //현재 실행되고 있는 매서드가 속한 객체를 반환.
}



Stock::Stock(string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock()
{
	
}
