#include <iostream>
#include <string>

using namespace std;

int main() {
  // 출력
  // cout << "Hello, World!" << endl;

  // 입력
  // int a, b;
  // cin >> a >> b;
  // cout << a << " + " << b << " = " << a + b << endl;

  // 문자열
  // string str;
  // str = "Hello";
  // cout << str << endl;

  string name;
  cout << "이름입력 : ";
  cin >> name;

  string message = "안녕하세요, " + name + "님";
  cout << message << endl;

}