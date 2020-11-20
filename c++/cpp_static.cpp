// static : 정적 <-> 동적

#include <iostream>

using namespace std;

// RGBA 각각 8비트씩 쓴다
// 0 ~ 1 float R G B

class Color {
public:
  Color() : r(0), g(0), b(0) { }
  Color(float r, float g, float b) : r(r), g(g), b(b) { }

  float GetR() { return r;}
  float GetG() { return g;}
  float GetB() { return b;}

  static Color MixColors(Color a, Color b) {
    return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
  }
  // 코드가 더 직관적임 
  // static 은 전역에서 쓰고 싶은 함수로 class 랑 밀접한 관계가 있고,
  // 클래스안에 private 필드안에 있는 멤버 메서드에 접근하고 싶을 때 정적 메서드로 바꿔줌

private:
  float r;
  float g;
  float b;
};

int main() {
  Color blue(0,0,1);
  Color red(1,0,0);

  Color purple = Color::MixColors(blue, red);

  cout << " r = " << purple.GetR() << " g = " << purple.GetG() << " b = " << purple.GetB() << endl;
}