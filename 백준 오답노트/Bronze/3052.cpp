/* --- 오답 ----
    #include <iostream>
    #include <string>

    using namespace std;

    int main() {

        int input[10];
        int count = 0;
        int temp = 0 ;
        for (int i = 0; i < 10; i++) {
            cin >> input[i];
            if (temp != input[i]) count++; 
            //temp에는 바로 한칸 이전것과만 비교가 된다. 그래서 만약 0번에 나머지가 1이 나왔고 2번째에 43이 되었으면 카운팅이 올라가는 오류가 발생한다.
            temp = input[i] % 42;
        }
        cout << count;

        return 0;
    }
*/


#include <iostream>

using namespace std;

int main() {
  
    int remain[10]; //나머지 저장.
    int input; 
    int output = 10;
    int count = 0;
    
   
    for (int i = 0; i < 10; i++) {
        cin >> input;
        remain[i] = input % 42; //나머지로 올 수 있는 값은 0~41이다.
    }

    for (int j = 0; j < 10; j++) {
        if (remain[j] == 42) continue; 
        for (int k = 0; k < 10; k++) {
            if (j == k) continue; 
            if (remain[j] == remain[k]) {
                remain[k] = 42; //즉 이미 서로 같은 것으로 판별하여 개수가 산정되었기 때문에 다음 루프에서 중복계산을 방지하기 위해 42로 지정해준다.
                count++;
            }
        }
        output = output - count;
        count = 0;
    }

    cout << output;

    return 0;
}
