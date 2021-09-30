#include <iostream>

using namespace std;

class Oval {
private:
	int width, height;

public:
	Oval(int w, int h) {
		width = w;
		height = h;
	}

	Oval() {
		width = 1;
		height = 1;
	}

	~Oval() {
		cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;
	}

	int getWidth() {
		return width;
	}

	int getHeight() {
		return height;
	}

	void show() {
		cout << "width = " << width << ", " << "height = " << height << endl;
	}

	void set(int nw, int nh) {
		width = nw;
		height = nh;
	}

};

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}