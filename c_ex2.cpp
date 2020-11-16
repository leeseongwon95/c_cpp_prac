#include <stdio.h>

int main() {
  int a;  // 선언
 
  a = 3;  // 대입
  printf("%d\n", a);

  a = 5;
  printf("%d\n", a);

  int a = 2;  // 초기화
  int b = 3;

  printf("%d + %d = %d\n", a, b, a + b);

  // 변수 이름 : 알파벳 대소문자, _, 숫자 (첫번째 글자) x 
  int abc;
  int a2;
  int AAAA;

  // int: 32비트 (4바이트) , 정수를 담는데 쓰임
  int a = 5;
  int b = 3;

  int hap = a + b;
  int cha = a - b;
  int gop = a * b;
  int mok = a / b;
  int namuji = a % b;

  printf("%d + %d = %d\n", a, b, hap);
  printf("%d - %d = %d\n", a, b, cha);
  printf("%d * %d = %d\n", a, b, gop);
  printf("%d / %d = %d\n", a, b, mok);
  printf("%d %% %d = %d\n", a, b, namuji);

 // float: 32비트 (4바이트) , 실수를 담는데 쓰임
  float a = 9.8;
  float b = 3.14;

  float hap = a + b;
  float cha = a - b;
  float gop = a * b;
  float mok = a / b;
  

  printf("%f + %f = %f\n", a, b, hap);
  printf("%f - %f = %f\n", a, b, cha);
  printf("%f * %f = %f\n", a, b, gop);
  printf("%f / %f = %f\n", a, b, mok);
  
// double: 64비트 (8바이트) , 실수를 담는데 쓰임
  double a = 9.8;
  double b = 3.14;

  double hap = a + b;
  double cha = a - b;
  double gop = a * b;
  double mok = a / b;
  

  printf("%f + %f = %lf\n", a, b, hap);
  printf("%f - %f = %lf\n", a, b, cha);
  printf("%f * %f = %lf\n", a, b, gop);
  printf("%f / %f = %lf\n", a, b, mok);

// 부동소수점 (floating point)
  
}