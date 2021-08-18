#include <iostream>

using namespace std;

template<class Any> //class 혹은 typeName
Any sum(Any a, Any b);

template<class Any> //class 혹은 typeName
Any sum(int a, Any b);


int main(){
	//함수 템플릿
	//구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의.
	//데이터형에 상관없이(특정 데이터형에 구속되지 않고) 범용적으로 함수를 사용하기 위해.

    int a = 3;
    int b = 4;
    //cout << sum(a, b) << endl; <- 함수오버로딩이 불가능한 경우다. 템플릿을 이용해 오버로딩한 두 함수에 모두 해당하기 때문이다.

    float c = 3; 14;
    float d = 1.592;
    cout << sum(c, d) << endl;

   // cout << sum(a, c) << endl; //에러 발생
   // a가 int형 이므로 Any역시 int가 된다. int의 자리에 float가 들어와 에러가 발생하게 된다. 
  
    cout << sum(a, c) << endl; //template을 사용하여 오버로딩을 하면 해결할 수 있다.

	return 0;
}

template <class Any>
Any sum(Any a, Any b) {
    return a + b;
}

template<class Any> //class 혹은 typeName
Any sum(int a, Any b) {
    return a + b;
}
