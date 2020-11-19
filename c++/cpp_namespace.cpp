#include <iostream>


/*
int n; // 전역변수
void set() {
  n = 10; // 명시적 전역변수 (전역변수라는걸 알려줌)
}
namespace doodle {
  int n;
  void set();
}
namespace google {
  int n;
  void set();
}

int main() {
  ::set();
  doodle::set();
  google::set();
  cout << ::n << endl;
  cout << doodle::n << endl;
  cout << google::n << endl;
}

namespace doodle {
  void set() {
    n = 20;
  }
} 

void google::set() {
   n = 30;
    // ::n = 30;  전역의 n을 보기때문에 0이란 값을 받게됨
}
*/
int n;
void set() {
  n = 10;
}

namespace doodle {
  int n;
  void set() {
    n = 20;
  }

  namespace google {
    int n;
    void set() {
      n = 30;
    }
  }
}

int main() {
  using namespace std;
  using namespace doodle;

  ::set();
  doodle::set();  // doodle:: 생략 불가
  google::set();  // doodle:: 생략 가능

  cout << ::n << endl;
  cout << doodle::n << endl;
  cout << doodle::google::n << endl;

}