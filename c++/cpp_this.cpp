// this : 자기 객체 자신을 가리키는 포인터
#include <iostream>

using namespace std;

class MyClass {
  public:
    void PrintThis() { // 보이지 않는 매개변수로 받아놓는 포인터
      cout << "나의 주소는 : " << this << endl;
    }
};

int main() {
  MyClass a, b;

  cout << "a의 주소는 " << &a << endl;
  cout << "a의 주소는 " << &b << endl;

  a.PrintThis();
  b.PrintThis();
}