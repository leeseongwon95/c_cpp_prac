#include <stdio.h>

// call by value : 값에 의한 호출
// call by reference : 참조에 의한 호출
int a, b;

void swap(int *x, int *y) {
  // 두 개의 변수 값을 바꿈
  int tmp = *x;  // 실무에서 많이 쓰임
  *x = *y;
  *y = tmp;
} // 함수 종료 ? a b 값이 안바뀜 값만 넘겨 주고 끝남 (call by value) * 를 붙여줘야함

// 아니면 & 붙여서 일반변수를 리턴하는것처럼 보이지만 사실은 값이 바뀌는 트릭
void swap2(int &x, int &y) {
  // 두 개의 변수 값을 바꿈
  int tmp = x;  // 실무에서 많이 쓰임
  x = y;
  y = tmp;
}
int main() {

  scanf("%d%d", &a, &b);
  swap(&a, &b); // 주소를 넘겨줘야함 이것을 call by address

  printf("a = %d , b = %d ", a, b);
}