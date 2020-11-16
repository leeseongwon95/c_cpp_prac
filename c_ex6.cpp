#include <stdio.h>

int main() {
  int a = 5;
  printf("a는 원래 %d 였다...\n", a);
  a = a + 3; // = : 대입연산 (같다는 의미가 아님)
  printf("3을 더했더니 %d가 되었다\n", a);

  a += 3; // a = a + 3;
  a -= 3; // a = a - 3;
  a *= 3; // a = a * 3;
  a /= 3; // a = a / 3;
  a %= 3; // a = a % 3;

  a++; // a + 1;
       // a = a + 1;
  a--;

  // 전치와 후치

  int a = 10;
  int b;
  printf("=== 전치 증가 연산 ===\n");
  b = ++a; // 먼저 증가시키고 대입
  printf("a : %d\n", a); // 11
  printf("b : %d\n", b); // 11 
  
  printf("=== 후치 증가 연산 ===\n");
  b = a++; // 대입시키고 증가
  printf("a : %d\n", a); // 11
  printf("b : %d\n", b); // 11 

  // 비교 연산자 , 논리 연산자 
  int a, b;
  scanf("%d%d", &a, &b);

  // bool: 진리값 저장용 변수 (1바이트)
  bool p = a > b;
  bool q = a < b;
  bool r = a == b; // 같다

  // a >= b : a는 b보다 크거나 같다
  // a <= b : a는 b보다 작거나 같다
  // a != b : a는 b가 아니다

  printf("%d\n", p);
  printf("%d\n", q);
  printf("%d\n", r);

  // 논리 연산자 (그리고 , 또는 , ...)
  // && || !
  int a;
  scanf("%d", &a);

  bool p = (a >= 1) && (a <= 10);
  bool q = a == 3 || a == 7;
  bool r = !q;

  printf("%d\n", p);
  printf("%d\n", q);
  printf("%d\n", r);

}