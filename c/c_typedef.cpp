// typedef
// type define 형을 정의한다

#include <stdio.h>

int main() {
  typedef int Int32;
  Int32 n = 20;

  printf("%d\n", n); // 20
  printf("%lu\n", sizeof(Int32)); // 4 바이트

  typedef int Pair;
  Pair point[2] = { 3, 4 }; // int point[2] = { 3, 4 }

  printf("(%d, %d)\n", point[0], point[1]);

  typedef char *String;

  String name = "seongwo sdasd sd asd a sdn"; // char 형 포인터에 문자열을 담을 수 있다.

  printf("이름 : %s\n", name);

}