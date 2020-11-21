#include <iostream>

using namespace std;

class Vector2 {
public:
  Vector2();
  Vector2(float x, float y);

  float GetX() const; 
  float GetY() const;

  // Vector2 operator+(Vector2 rhs) { 
  //   return Vector2(x + rhs.x, y + rhs.y); 
  // } 
  // operator+ ? 3가지 결함이있음 
  // 1. 선언 정의 분리 되어있지 않음
  // 2. const 매서드로 선언해줘야 할듯함
  // 3. 안에 들어가는 매개변수 자체도 const 로 선언

  Vector2 operator+(const Vector2 rhs) const; // 멤버 연산자
  Vector2 operator-(const Vector2 rhs) const;
  Vector2 operator*(const float rhs) const;
  Vector2 operator/(const float rhs) const;
  float operator*(const Vector2 rhs) const;


private:
  float x;
  float y;
};

Vector2 Sum(Vector2 a, Vector2 b) {
    return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY()); 
  } 
Vector2 operator*(const float a, const Vector2 b) { // 비멤버연산자
  return Vector2(a * b.GetX(), a * b.GetY());
}


int main() {
  Vector2 a(2, 3);
  Vector2 b(-1, 4);
  Vector2 c1 = Sum(a, b);
  Vector2 c2 = a.operator+(b); // 연산자 자체도 매서드 가능
  Vector2 c3 = a + b; // operator+ 를 사용하면 이렇게도 사용 가능함 
  // 연산자 오버로딩이 적용 되었음
  Vector2 c4 = a - b;
  Vector2 c5 = a * 1.6; // 1.6 * a 는 에러가남 (1.6).operator*(a); 이라는 말인데,
  //  double float 같은 c언어 기본 자료형들은 연산자 오버로딩이 불가능함 객체가 아니라 안됨
  Vector2 c6 = a / 2;
  float c7 = a * b;
  Vector2 c8 = 1.6 * a;

  cout << a.GetX() << ", " << a.GetY() << endl;
  cout << b.GetX() << ", " << b.GetY() << endl; 
  cout << c1.GetX() << ", " << c1.GetY() << endl;
  cout << c2.GetX() << ", " << c2.GetY() << endl;
  cout << c3.GetX() << ", " << c3.GetY() << endl;
  cout << c4.GetX() << ", " << c4.GetY() << endl;
  cout << c5.GetX() << ", " << c5.GetY() << endl;
  cout << c6.GetX() << ", " << c6.GetY() << endl;
  cout << c7 << endl;
  cout << c8.GetX() << ", " << c8.GetY() << endl;

}

Vector2::Vector2() : x(0), y(0) { }
Vector2::Vector2(float x, float y) : x(x), y(y) { }
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const { 
  return Vector2(x + rhs.x, y + rhs.y); 
} 
Vector2 Vector2::operator-(const Vector2 rhs) const {
  return Vector2(x -  rhs.x, y - rhs.y); 
}
Vector2 Vector2::operator*(const float rhs) const {
  return Vector2(x * rhs, y * rhs); 
}
Vector2 Vector2::operator/(const float rhs) const {
  return Vector2(x / rhs, y / rhs); 
}
float Vector2::operator*(const Vector2 rhs) const {
  return x * rhs.x + y * rhs.y; 
}