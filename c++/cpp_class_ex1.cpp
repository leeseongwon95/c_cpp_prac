// 1. 다음프로그램의 출력 결과는 ?
#include <iostream>
using namespace std;

int n = 0;
namespace A {
  int n = 0; // b는 이 n 을 찾아냄
  namespace B {
    void set() { n = 10; } // 선언과 정의가 분리되어있지 않음, n이 어디있는지 찾아보다가 A로 올라감
    int n = 0;
  }
}
namespace C {
  void set(); // c 안에 n이 있다는 걸 컴파일러가 알아냄
  int n = 0;
}
void C::set() { n = 20; } // 선언과 정의가 분리되어있음, c 안에 n 이있다는걸 알려줌

int main() {
  using namespace A::B;

  set();
  C::set();

  cout << ::n << endl; // 0 
  cout << A::n << endl; // 10
  cout << A::B::n << endl; // 0
  cout << C::n << endl; // 20 
}




