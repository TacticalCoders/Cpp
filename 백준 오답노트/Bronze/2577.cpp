#include <iostream>
#include <string> //string을 사용하기 위해서는 꼭 include해줘야 함.

using namespace std;

int main() {
    
    int a, b, c, mul;
    int count = 0;
    cin >> a >> b >> c;
    mul = a * b * c;
    string num = to_string(mul); 
 
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < num.length(); k++) { //string객체 안에 있는 length라는 '메소드'를 실행하는 것이기 때문에 ()를 붙혀야 한다.
            if (num[k] == (char)(48 + i)) count++; //아스키코드를 보면, 48번부터 문자 0이 시작된다. (문자 0(아스키코드 값48) != 숫자 0(아스키코드 값 0 =NULL) )
        }
        cout << count <<endl;
        count = 0;
    }

    return 0;
}
