// 정적 할당 : int a; 프로그램이 시작되면 생기고 프로그램이 종료되면 사라짐
// 동적 할당 : 실행과는 전혀 상관없이 아무때나 자기가 원할 때 메모리 이만큼은 쓰겠다 아니면 쓰지 않겠다
// 프로그램 실행 중에 변수를 메모리에 할당하는 것
// 필요할 때 쓰고 필요없을 때 안쓰는 동적 할당이 실무에선 엄청 많이 쓰임 (유용함)
#include <iostream>
using namespace std;

// 3. 객체에 대한 동적 할당
class Vector2 {
public:
  Vector2() : x(0), y(0) {
    cout << this << " : Vector2()" << endl;
  }
  Vector2(const float x, const float y) : x(x), y(y) {
    cout << this << " : Vector2(const float x, const float y)" << endl; 
  }
  ~Vector2() {
    cout << this << " : ~Vector2()" << endl;
  }
  float GetX() const { return x; }
  float GetY() const { return y; }  

private:
  float x;
  float y;
};

int main() {
  
  // 1. 변수 동적 할당
  int *a = new int(5); // new : 연산자 

  cout << *a << endl;
  cout << a << endl;

  *a = 10;

  cout << *a << endl;
  cout << a << endl;

  delete a; // 메모리 해제 : 메모리의 낭비 방지


  // 2. 배열 동적 할당 (많이 쓰임)
  // ex) int arr[1000] : 1000칸을 넉넉히 잡아두지만 1칸을 쓰고 싶을 땐 한 칸만 쓴다는 의도 -> (동적할당)

  int *arr;
  int len;
  cout << "동적할당할 배열 길이 입력 : ";
  cin >> len;

  arr = new int[len]; // 이 배열의 0 번째 주솟값을 반환함

  for (int i = 0; i < len; i++) {
    arr[i] = len - i;
  }
  for (int i = 0; i < len; i++) {
    cout << arr[i] << endl;
  }

  // delete arr; // &arr[0] 만 사라지게 되고 나머지는 남아있게 됨 이렇게 쓰면안됨
  delete[] arr; // 배열을 해제한다고 알려줘야 함


// 3. 객체에 대한 동적 할당
  Vector2 s1 = Vector2();
  Vector2 s2 = Vector2(2, 3);

  Vector2 *d1 = new Vector2();
  Vector2 *d2 = new Vector2(2, 3);

  cout << "(" << d1->GetX() << ", " << d1->GetY() << ")" << endl;
  cout << "(" << d2->GetX() << ", " << d2->GetY() << ")" << endl;

  delete d1;
  delete d2;
  // d1, d2 가 s1, s2 보다 먼저 소멸됨 (즉, 더 빨리 소멸됨)
}