// static : 정적 <-> 동적

#include <iostream>

using namespace std;

// RGBA 각각 8비트씩 쓴다
// 0 ~ 1 float R G B

// int idCounter = 1; class Color 와 관련이 있으니 class 안으로 집어 넣고 정적 멤버로 만들기 (static)
 
class Color {
public:
  Color() : r(0), g(0), b(0), id(idCounter++) { }
  Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }

  float GetR() { return r; }
  float GetG() { return g; }
  float GetB() { return b; }

  int GetId() { return id; }

  static Color MixColors(Color a, Color b) {
    return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
  }
  // 코드가 더 직관적임 
  // static 은 전역에서 쓰고 싶은 함수로 class 랑 밀접한 관계가 있고,
  // 클래스안에 private 필드안에 있는 멤버 메서드에 접근하고 싶을 때 정적 메서드로 바꿔줌

  // static int idCounter = 1; // 객체에 관련이 없고 class 에 관련이 있음 객체가 생설될때마다 idCounter에 1을 대입한다는게 말이 안됨
  // 프로그램이 커지다보면 전역변수나 전역함수는 객체지향 프로그래밍에서는 지양함 c# 언어는 전역변수나 전역함수 가 존재하지않음
  // 전역을 남용하면 코드가 난잡해짐 
  // 그래서 클래스안으로 넣어서 정적으로 선언해줘야함 그래서 정적멤버가 생겨남
  static int idCounter;
private:
  float r;
  float g;
  float b;

  int id;
};

int Color::idCounter = 1; // 선언과 정의를 분리 시켜줄 때 썼던 방법 class 안에서는 넣을 수 없어서 class 밖에 선언과 정의를 분리 시켜줘야 한다.

int main() {
  Color red(1,0,0);
  Color blue(0,0,1);

  Color purple = Color::MixColors(blue, red);

  cout << " r = " << purple.GetR() << " g = " << purple.GetG() << " b = " << purple.GetB() << endl;
  cout << " red.GetId() = " << red.GetId() << endl;
  cout << " blue.GetId() = " << blue.GetId() << endl;
  cout << " purple.GetId() = " << purple.GetId() << endl;
}