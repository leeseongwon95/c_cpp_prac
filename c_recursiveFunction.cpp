#include <stdio.h>

// 재귀 함수
// recursion
// 학교 (배울 학, 학교(배울 학, 학교( 교) 교) 교) 이런식으로 자기자신이 다시 등장하는 함수

void rec(int n) {
  if (n > 5) return;
  printf("n = %d\n", n);
  rec(n + 1);  
}

int factorial(int n);

int main() {
  rec(1);

  // 팩토리얼
  // 5! = 5*4*3*2*1 = 120
  // n! = n * (n - 1)!  : 팩토리얼 속에 팩토리얼  헷갈림;

  printf("%d\n",factorial(3));
}

int factorial(int n) {
  if (n == 1) return 1;
  return n * factorial(n - 1);
}