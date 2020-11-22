#include  <iostream>
using namespace std;

class String {
public:
  String() {
    strData = NULL; // 포인터는 0 대신 NULL 이라고 씀 (이 포인터가 아무것도 가리키고 있지 않다)
    len = 0;
  }
  String(const char *str) { // str 이 const char 를 가리키는 포인터 이다.
    len = strlen(str);
    strData = new char[len + 1]; // 맨 끝에 NULL 문자가 있기 때문에 ('\0') 그러므로 NULL 문자를 고려해 len+1 만큼 할당
    strcpy(strData, str); // 깊은 복사
  }
  ~String() {
    delete[] strData;
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
  /*
  int *a = new int(5); 
  int *b = new int(3);

  a = b;  // 얕은 복사 (참조만 복사) reference
  *a = *b; // 깊은 복사 (값을 복사) value

  delete a;
  delete b;
  */

  String s;
}