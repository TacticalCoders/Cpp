//p353 프렌드와 연산자 중복 > a+b를 위한 + 연산자 함수를 프렌드로 작성.

#include <iostream>

using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { //만약 아무 인자를 넣지 않고 생성자를 호출하면 디폴트 값 0 0 
		this->kick = kick; this->punch = punch;
	}
	void show(); // 출력함수. 밑에서 작성.
	//friend 
	//어디에 작성하는가? -> 1. 클래스 내부의 멤버 변수 2. 클래스 외부 함수를 friend선언. 여기선 2.
	//1. Power operator+(Power op2); op1은 현재 객체를 가리킴. 
	friend Power operator+(Power op1, Power op2); // 밀에서 작성.
	//시험에서는 +가 아닌 다른 연산자일 수 있다.
};

void Power::show() { //자료형 소속클래스 :: 함수명 
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator+(Power op1, Power op2) { //두 Power객체의 속성값을 더하여 Power객체를 반환.
	Power tmp; //출력을 위한 Power객체 생성.
	tmp.kick = op1.kick + op2.kick; //만약 클래스 멤버 함수였다면 op1이 아니라 this
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5), b(4, 6), c; //c는 디폴트 매개변수에 의해 0 0이 기본값으로 설정된다.
	c = a + b;
	a.show();
	b.show();
	c.show();
}
