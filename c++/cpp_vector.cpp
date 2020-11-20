// 멤버 메서드의 선언, 정의 분리하기

// 선언 정의 분리하는 이유 자체는 어떤 함수가 다른 함수를 호출 할 수 있음 

/*
void a() {
  b(); // 식별자를 찾을 수 없음
}
void b() {
  a();
}
void c() {
  b();
}

-> 이렇게 고쳐줌 프로토타입 

void a();
void b();
void c();

void a() {
  b();
}
*/

#include <iostream>

using namespace std;

class Vector2 {
public:
  Vector2();
  Vector2(float x, float y);

  float GetX() const; 
  float GetY() const;

  static Vector2 Sum(Vector2 a, Vector2 b) {
    return Vector2(a.x + b.x, a.y + b.y); 
  } // 연산자 오버로딩의 기초
  // 정적

  Vector2 Add(Vector2 rhs) {
    return Vector2(x + rhs.x, y + rhs.y); 
  } // 동적 다이나믹

private:
  float x;
  float y;
};



int main() {
  Vector2 a(2, 3);
  Vector2 b(-1, 4);
  Vector2 c1 = Vector2::Sum(a, b);
  Vector2 c2 = a.Add(b);

  cout << a.GetX() << ", " << a.GetY() << endl;
  cout << b.GetX() << ", " << b.GetY() << endl; 
  cout << c1.GetX() << ", " << c1.GetY() << endl;
  cout << c2.GetX() << ", " << c2.GetY() << endl;

}

Vector2::Vector2() : x(0), y(0) { }
Vector2::Vector2(float x, float y) : x(x), y(y) { }
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }