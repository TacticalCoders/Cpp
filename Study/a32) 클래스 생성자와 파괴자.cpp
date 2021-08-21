#include <iostream>

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
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock(string, int, float); //생성자 오버로딩
	Stock(); //생성자
	~Stock(); //파괴자
};

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

Stock::Stock(string co, int n, float pr) {
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

Stock::~Stock() //파괴자에는 매개변수가 들어갈 수 없다.
{
	cout << name << "클래스가 소멸되었습니다. \n";
}

int main(){

	//파괴자는 명시적으로 호출할 필요 없음.

	cout << "생성자를 이용해 객체 생성\n";
	Stock temp("Panda", 100, 1000); // Stock temp = Stock("Panda", 100, 1000); 도 가능.

	cout << "디폴트 생성자를 이용하여 객체 생성\n";
	Stock temp2;

	cout << "temp와 temp2 출력\n";
	temp.show();
	temp2.show();

	cout << "생성자를 이용하여 temp 내용 재설정\n";
	temp = Stock("Coding", 200, 1000); // 기존에 있던 객체를 더 이상 참조하지 않으므로 자동으로 파괴자 실행.

	cout << "재설정된 temp 출력\n";
	temp.show();

	
	return 0;
}
