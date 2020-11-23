#include <iostream>
using namespace std;

class String {
public:
  String() {
    cout << "String() 생성자 호출" << endl;
    strData = NULL;
    len = 0;
  }
  String(const char *str) {
    cout << "String(const char*) 생성자 호출" << endl;
    len = strlen(str);
    strData = new char[len + 1]; // null 문자를 고려해 len + 1 만큼 할당
    cout << "strData 할당 : " << (void*)strData << endl;  // 형변환
    // (void*) why ? :  strData 가 포인터인데 그냥 strData 라고 적으면 char형 인지 문자열인지 컴파일러가 알지 못함
    // (void*) 주소값만 가지고있어서 자료형에 대한 정보는 가리키고 있지 않기 떄문에 저장되어 있는 값 자체를 바꿀 수 없다.
    strcpy(strData, str); // 깊은 복사
  }
  String(const String &rhs) { // String 정의에 포함되기때문에 rhs 로는 못하고 reference 로 해줘야함 (&rhs)
     // 복사 생성자 외의 다른 생성자나 멤버 매서드에서는 가능함.
    cout << "String(String &rhs) 생성자 호출" << endl;
    strData = new char[rhs.len + 1]; 
    cout << "strData 할당 : " << (void*)strData << endl; 
    strcpy(strData, rhs.strData); // 깊은 복사
     len = rhs.len; // 깊은 복사가 일어남
  }
  ~String() {
    cout << "~String() 소멸자 호출" << endl;
    delete[] strData;
    cout << "strData 해제됨" << (void*)strData << endl;
    strData = NULL; // 주로 delete[] 를 해주고 NULL 로 초기화를 해줌 : 안해주면 해제된 메모리에는 더 이상 접근할 수 없음 해제된 메모리에 접근을 막기 위해 
  }

  char *GetStrData() const {
    return strData;
  }

  int GetLen() const {
    return len;
  }
private:
  char *strData;
  int len;
};

int main() {
  String s1("안녕");
  String s2(s1); // s2 = s1 c++ 에서는 똑같은 의미임 (복사생성자)
  cout << s1.GetStrData() << endl;
  cout << s2.GetStrData() << endl;
  /*
    s2 객체에도 strData가 가리키는 공간이 할당되어야 하는데, 할당이 되지 않는 걸 볼 수 있음
    s2.strData가 따로 할당이 되지 않았는데도 s2도 똑같이 "안녕" 으로 출력되는 것으로 보아,
    s1.strData에 들어있는 주소값이 똑같이 복사되었을 (얕은 복사되었을) 것이라 추정할 수 있음.
  */
}