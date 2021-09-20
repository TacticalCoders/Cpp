#include <iostream>

using namespace std;

int main() {

    int a, b;

    while (cin >> a >> b) { //cin으로부터 읽기를 실패했을 때는 반복문이 실행되지 않는다.
                            //ex) 입력파일을 끝까지 읽었을 경우, 자료형이 일치하지 않는 경우, 입력장치 하드웨어 오류
        cout << a + b << endl;
    }
    
    return 0;
}
