#include "struct.h" //헤더 파일을 포함시킬 때에, 반드시 단 한 번만 포함시켜야 한다.(struct.h는 한 파일에 한번만 정의 되어야 한다.)
//#include "new.h" 에 "struct.h"가 또 정의되어 있다면, 에러가 발생하게 된다. 
//분할 컴파일 : 헤더 부분에 들어가는 요소를 하나의 헤더파일로 만들고, 이를 이용하여 함수를 또 다른 cpp 파일로 재정의 하는 기법.

/*
헤더부분의 요소
1.함수의 원형
2. #define이나 const를 사용하는 기호상수
3. 구조체 선언
4.클래스 선언
5.템플릿 선언
6. 인라인 함수
*/

int main() {

    MyStruct PandaCoding = {
      "KANG",
      22,
    };

    display(PandaCoding);

	return 0;
}
