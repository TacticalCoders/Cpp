#include "Coffee.h"

int main() {

	int input;
	bool repeat = true; 
	CoffeeVendingMachine coffeeMachine; //생성자 함수의 디폴트 값을 통해서 클래스를 생성할 때는 ()를 붙이면 안됩니다! 
	



	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (repeat) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
		cin >> input;
	
		switch (input)
		{
		case 0: repeat = false;  break;
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		default:
			cout << "잘못된 값을 입력했습니다. 다시 입력해주세요.(종료는 0) >>";
			break;
		}
	}
}
