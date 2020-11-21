// 3. 코드이 출력결과를 예상해라.
#include <iostream>
using namespace std;

class Myclass {
public:
  Myclass() : num(cnt++), ch('\0') { } // 1 : num = 0 , 2 : num = 1 ...
  // 포인터에 대해서 정확하게 이해해야 함
  // 동적할당에서 제일 중요한게 포인터임
  void Check(Myclass *ptr) { // 여기에 들어간 값이 &obj[0] 그러면 ptr = &obj[0]
    if (ptr + num == this) { // 포인터에다가 num 을 더하면 &ptr[num] 값과 똑같음 그러면 &obj[num] 이랑 값이 된다.
      cout << num << endl; // this 도 자신이 속해있는 포인터임 그러면 this 도 obj[num]
    }
    // 결국에 이 if 문은 항상 성립이 된다는 것임
  }
  static int cnt;
private:
  int num;
  char ch;
};
int Myclass::cnt = 0;

int main() {
  Myclass obj[5];

  cout << "Test #1 : " << endl;
  for (int i = 0; i < 5; i++) {
    obj[i].Check(obj); // &obj[0] 의 값을 체크함수에 넘겨줌
  }
  cout << "Test #2 : " << endl;
  for (Myclass &i : obj) { // 범위 기반 for 문
    i.Check(obj);
  }
  cout << "cnt = " << Myclass::cnt << endl;
}
/*
  Test #1 : 
  0
  1
  2
  3
  4
  Test #2 :
  0
  1
  2
  3
  4
*/