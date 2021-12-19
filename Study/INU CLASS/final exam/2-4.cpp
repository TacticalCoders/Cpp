//가상함수를 사용한 상속 문제. 

#include <iostream>
#include<string>

using namespace std;

class Shape {
protected:
	string name;
	int width, height;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0;} //함수를 재정의 하지 않을 경우 이대로 실행.
	string getName() { return name; }
};

class Oval : public Shape {
public: //모든 도형은 공통적으로 이름, 가로, 세로가 있으므로 따로 변수 선언 필요x 
	Oval(string name, int width, int height): Shape(name, width, height) {} //하지만 상속시에 생성자를 활용하여 초기화 할 필요 있음.
	virtual double getArea() { return 3.14 * width * height; } //넓이 계산 방식이 다르기 때문에 재정의.
};

class Rect : public Shape {
public:
	Rect(string name, int width, int height) : Shape(name, width, height) {}
	virtual double getArea() { return width * height; }
};

class Triangular : public Shape {
public:
	Triangular(string name, int width, int height) : Shape(name, width, height) {}
	virtual double getArea() { return width * height / 2; }
};

int main() {
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;
	for (int i = 0; i < 3; i++)
		delete p[i];
}
