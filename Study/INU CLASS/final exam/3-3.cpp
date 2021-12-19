//map을 활용한 점수 데이터 매니저 제작 문제.

#include <iostream>
#include <string>
#include <map>

using namespace std;

class GradeManager {
	string program; 
	map<string, int> scoreMap; //map객체 생성. string이 key가 되고, int가 value가 됨. 
	bool checkInputError();
	void insert();
	void search();

public:
	GradeManager(string name);
	void run();
};

GradeManager::GradeManager(string program) {
	this->program = program;
}

void GradeManager::insert() {
	string name;
	int score;
	do {
		cout << "이름과 점수 >> ";
		cin >> name >> score;

		if (checkInputError()) continue;

		if (scoreMap.find(name) != scoreMap.end()) { //데이터를 찾았을 경우. map.end()가 아니라면 현재 map에 해당 key가 존재하는 것. 삭제후 다시 추가하는 과정 필요.
			cout << name << "의 점수를 수정할 수 없음" << endl;
			break;
		}
		scoreMap.insert(make_pair(name, score));
		break;
	} while (true);
}

void GradeManager::search() {
	string name;
	cout << "이름>> ";
	cin >> name;
	if (scoreMap.find(name) == scoreMap.end()) { //데이터를 끝까지 찾지 못했을 경우, iterator는 map.end()를 반환한다. 

		cout << name << "은 없는 사람임" << endl;
	}
	else {
		int score = scoreMap[name];
		cout << name << "의 점수는 " << score << endl;
	}
}

bool GradeManager::checkInputError() {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "입력오류" << endl;
		return true;
	}
	else
		return false;
}
void GradeManager::run() {
	int menu;
	cout << "***** 점수관리 프로그램 " << program << "으르 시작합니다. *****" << endl;
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> menu;

		if (checkInputError()) continue;
		switch (menu) {
		case 1: insert(); break;
		case 2: search(); break;
		case 3: cout << "프로그램을 종료합니다..."; return; //break할 필요 없이 바로 리턴을 하면 되는구나...
		}
	}
}

int main() {
	GradeManager gm("HIGE SCORE");
	gm.run();
}
