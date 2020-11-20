// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

// class MyClass {
//   public:
//     MyClass() { // 생성자
//       cout << "생성자가 호출되었다." << endl;
//     }

//     ~MyClass() { // 소멸자
//       cout << "소멸자가 호출되었다." << endl;
//     }
// };

// MyClass globalObj;

// void testLocalObj() { // 지역 객체 (local object)의 생성과 소멸을 테스트하기 위한 함수입니다.
//   cout << "testlocalObj 함수 시작" << endl;
//   MyClass localObj;
//   cout << "testlocalObj 함수 끝" << endl;
// }
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
  Complex() {
    real = 0;
    imag = 0;
  }
  Complex(double real_, double imag_) {
    real = real_;
    imag = imag_;
  }

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

int main() {
  Complex c1;
  Complex c2 = Complex(2, 3);
  Complex c3(2, 3);
  Complex c4 = { 2, 3 }; // struct 에서 처럼 사용 가능
  Complex c5 = Complex{ 2, 3 }; // 중괄호를 사용한 초기화도 나름대로 용도가 있지만 , 조금 어려운 개념들이 있음
  Complex c6{ 2, 3 };

  cout << "c1 = " << c1.GerReal() << ", " << c1.GetImag() << endl;
  cout << "c2 = " << c2.GerReal() << ", " << c2.GetImag() << endl;
  cout << "c3 = " << c3.GerReal() << ", " << c3.GetImag() << endl;
}