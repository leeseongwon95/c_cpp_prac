#include <iostream>

// 함수 overloading

// swap 으로 함수 이름이 다 똑같아도 알아서 매개변수를 보고 찾아주는 기능
// void swap(int &a, int &b) { // reference 로 매개변수를 넣어줌
//   int tmp = a;
//   a = b;
//   b = tmp;
// }
// void swap(double &a, double &b) {
//   double tmp = a;
//   a = b;
//   b = tmp;
// }
// void swap(int* (&a), int* (&b)) {
//   int *tmp = a;
//   a = b;
//   b = tmp;
// }

// int main() {
//   int a = 20, b = 30;
//   double da = 2.222, db = 3.333;
//   int *pa = &a, *pb = &b;

//   swap(a, b);
//   swap(da, db);
//   swap(pa, pb);

//   std::cout << "a : " << a << std::endl;
//   std::cout << "b : " << b << std::endl;

//   std::cout << "da : " << da << std::endl;
//   std::cout << "db : " << db << std::endl;

//   std::cout << "*pa : " << *pa << std::endl;
//   std::cout << "*pa : " << *pb << std::endl;
// }

using namespace std;

int inventory[64] = { 0 };
int score = 0;

// void getItem(int itemId) {
//   inventory[itemId]++;
// }
// void getItem(int itemId, int cnt) {
//   inventory[itemId] += cnt;
// }
// void getItem(int itemId, int cnt, int sc) {
//   inventory[itemId] += cnt;
//   score += sc;
// }

// default parameter  매개변수 디폴트 값 넣어주기
void getItem(int itemId, int cnt = 1, int sc = 0) { // 디폴트값이 없으면 필수적으로 입력이 되어야 함
  inventory[itemId] += cnt;
  score += sc;
}

int main() {
  getItem(6, 5);
  getItem(3, 2);
  getItem(3);
  getItem(11, 34, 7000);

  cout << score << endl;
  for (int i = 0; i < 16; i++) {
    cout << inventory[i] << ' ';
  }
  cout << endl;
}