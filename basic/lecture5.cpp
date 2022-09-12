#include <iostream>

using namespace std;

int main(){
    //char : 작은 문자형
    //c++에서 문자를 사용할 때, 아스키 코드를 사용한다. 
    //아스키 코드는 문자마다 대응되는 숫자가 있다.

    // int a = 77;
    // char b = a; //char 형은 작은 문자형 이기 때문에, 
    //아스키 코드로 표현할 수 있는 한 단어를 표현한다고 한다.
    // char b = 'a';
    //작은 문자열은 작은따옴표 (') 큰 문자열은 큰 따옴표 (")
    // c++는 어디까지 문자인지 확인할 필요가 있다. null문자는 '\0'으로 표현이 된다.
    // 예시는 아래와 같다.
    // char b[] = {'a', 'b', 'c','\0'};
    // "" >> 명시적으로 null 문자가 포함이 됨 => string
    // char b = "a"; // 두개 문자가 저장됨 'a','\0' 그래서 안됨
    // char b = 'a'; //한글을 표현하려면, 아스키코드에서 지원이 안되고 유니코드에서 지원한다. 
    //wput이나, 직접 지역 설정이나 string을 사용하는 방법이 있다.

    //boll : 0 혹은 1만 나타낼 수 있다. 0 : false, 1 : true
    bool a = 0;
    bool b = 1;
    bool c = 10; // 0이외의 모든 값을 1로 저장한다.


    cout << a << " " << b << " " << c << endl; // M 이 출력됨


    



    return 0;
}