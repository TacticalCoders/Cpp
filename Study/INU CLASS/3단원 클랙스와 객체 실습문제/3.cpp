#include <iostream>

using namespace std;

class Account {

	string name;
	int id;
	int balance; //잔액
	
public: //기본이 private이기 때문에  메서드를 정의할 때는 꼭 public을 사용해야 한다.

	Account(string _name, int _id, int _balance) {
		name = _name;
		id = _id;
		balance = _balance;
	}

	void deposit(int won) {
		balance += won;
	}

	int withdraw(int won) { //실제로 출금한 금액 리턴.
		balance -= won;
		if (balance <= won) return (won - balance);
		else return won;
	}

	int inquiry() {
		return balance;
	}

	string getOwner(){
		return name;
	}
};

int main() {
	Account a("kitea", 1, 5000); // id 1번, 잔액 5000원, 이름 kitae인 계좌 생성
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
