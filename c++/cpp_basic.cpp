#include <iostream>

using namespace std;

/*
  reference 변수
  int a(5);
  int &p = a;
  p = 10;

  cout << p << endl;
  cout << a << endl;
*/ 

int main() {
  // int a(10);
  // int b(a + 5);

  // cout << "a = " << a << endl;
  // cout << "b = " << b << endl;

  // 범위 기반 for 문 (배열내에서 더 편하게 쓸 수 있게 만든 for 문)
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 1, 2, 3};

  for (int &n : arr) { // reference 변수가 되면 돌아감
    cout << n << ' ';
    n++;
  }
  cout << endl;

  for (int n : arr) {
    cout << n << ' ';
  }
  cout << endl;

  // r-value

  // int a(5);
  // int &&r1 = a;
  // int &&r2 = 3;
  // int &&r3 = a * a;


}