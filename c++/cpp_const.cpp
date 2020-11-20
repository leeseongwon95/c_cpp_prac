// 1. 매개변수의 상수화 (모든 함수)
// 2. 메서드의 상수화 (멤버 메서드)

#include <iostream>

using namespace std;

class Account {
public:
  Account() : money(0) { }
  Account(int money) : money(money) { } 

  void Deposit(const int d) { // const 를 붙여줌
    // d = money; // 이런 실수를 했을 때
    money += d;
    cout << d << "원을 예금했다." << endl;
  }
  void Draw(int d) {
    if (money >= d) {
      money -= d;
      cout << d << "원을 인출했다." << endl;
    }
  }
  int ViewMoney() const {
    // money++; // 이런 것을 방지하기 위해 메서드의 상수화 (멤버 메서드) 를 해야 함
    return money;
  }

private: // public 의 함수로만 private 에 접근 가능하기 때문에 money 를 숨겨놓음
  int money;
};

int main() {
  Account doodle(200);

  doodle.Deposit(100);
  doodle.Draw(20);

  cout << doodle.ViewMoney() << endl;  
}

