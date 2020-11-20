// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass {
  public:
    MyClass() { // 생성자
      cout << "생성자가 호출되었다." << endl;
    }

    ~MyClass() { // 소멸자
      cout << "소멸자가 호출되었다." << endl;
    }
};

// MyClass globalObj;

void testLocalObj() { // 지역 객체 (local object)의 생성과 소멸을 테스트하기 위한 함수입니다.
  cout << "testlocalObj 함수 시작" << endl;
  MyClass localObj;
  cout << "testlocalObj 함수 끝" << endl;
}
// int main() {
//   cout << "Main 함수 시작" << endl;
//   testLocalObj();
//   cout << "Main 함수 끝" << endl; 
// }

/*
  생성자가 호출되었다.
  Main 함수 시작
  Main 함수 끝
  소멸자가 호출되었다.

  Main 함수 시작
  testlocalObj 함수 시작
  생성자가 호출되었다.
  testlocalObj 함수 끝
  소멸자가 호출되었다.
  Main 함수 끝
*/

// 생성자 : 멤버 변수 초기화
// 소멸자 : 메모레 해제

// 복소수(real, imag) (실수, 허수) 순서쌍


class Complex { // complex : 복소수
public:
  // Complex() {
  //   real = 0;
  //   imag = 0;
    // real(0); // 단순히 값을 대입할때는 괄호를 사용하여 대입할 수 없음
    // imag(0);
  // }
  Complex() : real(0), imag(0) { } // 초기화 목록

  // Complex(double real_ = 0, double imag_ = 0) { // 초기화 시켜놔서 위에껄 지워도 무방함
  //   real = real_;
  //   imag = imag_;
  // }

  Complex(double real_, double imag_) : real(real_), imag(imag_) {} 

  double GerReal() {
    return real;
  }
  void SetReal(double real_) {
    real = real_;
  }
  double GetImag() {
    return imag;
  }
  void SetImag(double imag_) {
    imag = imag_;
  }

private:
  double real;
  double imag;
};
/*
int main() {
  // int a(5); // 변수를 초기화하는 방법 중 하나

  Complex c1;
  Complex c2 = Complex(2, 3);
  Complex c3(2, 3);
  // Complex c4 = { 2, 3 }; // struct 에서 처럼 사용 가능
  // Complex c5 = Complex{ 2, 3 }; // 중괄호를 사용한 초기화도 나름대로 용도가 있지만 , 조금 어려운 개념들이 있음
  // Complex c6{ 2, 3 };

  cout << "c1 = " << c1.GerReal() << ", " << c1.GetImag() << endl;
  cout << "c2 = " << c2.GerReal() << ", " << c2.GetImag() << endl;
  cout << "c3 = " << c3.GerReal() << ", " << c3.GetImag() << endl;
}
*/

// 시h 분m 초s

class Time {
public:
  Time() : h(0), m(0), s(0) { }
  Time(int s_) : Time() {
    s = s_;
  }
  Time(int m_, int s_) : Time(s_) {
    m = m_;
  }
  Time(int h_, int m_, int s_) : Time(m_, s_) {
    h = h_;
  }

  /*
    변수 초기화 목록과 형태가 똑같아서 헷갈리기 쉬우니 조심!
    변수 초기화 목록 예시 : m(m_), s(s_)
    생성자 위임 예시 : Time(m_, s_)
  */

  int h;
  int m;
  int s;
};

int main() {
  Time t1;
  Time t2(5);
  Time t3(3, 16);
  Time t4(2, 42, 15);

  cout << "t1 : " << t1.h << t1.m << t1.s << endl;
  cout << "t2 : " << t2.h << t2.m << t2.s << endl;
  cout << "t3 : " << t3.h << t3.m << t3.s << endl;
  cout << "t4 : " << t4.h << t4.m << t4.s << endl;
};