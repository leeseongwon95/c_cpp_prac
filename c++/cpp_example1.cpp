/*
  1. 이름과 점수를 입력받고, 다음과 같이 출력되는 프로그램을 작성해 보세요.

  이름 입력 : 홍길동
  점수 입력 : 80
  홍길동 님의 점수는 80점입니다.
*/

#include <iostream>
#include <string> // string 문자열

using namespace std;

/* 
  int main() {
  string name;
  int score;

  cout << "이름 입력 : ";
  cin >> name;
  cout << "점수 입력 : ";
  cin >> score;

  cout << name << "님의 점수는" << score << "점입니다." << endl;
} */

/*
  2. 범위 기반 for 문을 사용하여 이차원 배열을 출력해보세요.
*/
/* int main() {
  int arr[2][3] = {{ 1, 2, 3 },{ 4, 5, 6 }};

  // 작성
  for (int(&ln)[3] : arr) {
    for (int &col : ln) {
      cout << col << ' ';
    }
    cout << endl;
  }
  
  // 원리
  for (int(*ln)[3] = arr; ln < arr + 2; ln++) {
    for (int *c = *ln; c < *ln + 3; c++) {
      cout << *c << ' ';
    }
    cout << endl;
  }
  
}*/

/*
  3. 다음과 같은 함수 정의에서 컴파일 오류가 나는 이유를 찾아보세요.
*/
// 직사각형  방법 2 가지
// overloading 시킴 
// 디폴트 매개변수를 오른쪽부터 시작해야함
// 변수의 개수가 똑같음 그래서 위에껄 한건지 아래껄 한건지 모름 그래서 오버로딩이 안됨
/*
void drawRectangle(int l, int r, int t, int b) {

}
void drawRactangle(int x = 0, int y = 0, int w, int h) {

}
*/