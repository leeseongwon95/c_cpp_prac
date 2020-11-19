#include <iostream>

int main() {
  // // sizeof(x) : x 의 크기를 알려줌

  printf("%lu %lu %lu %lu\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
  

  //형변환 : 자료형을 다른 자료형으로 바꾸는 작업

  // 정수 / 정수 = 정수
  // 실수 / 정수 = 실수
  // 정수 / 실수 = 안하는게 좋음
  // 실수 / 실수 = 실수

  int math = 90, korea = 95, english = 96;
  int sum = math + korea + english;
  double avg = (double)sum / 3; // sum을 잠시 double로 바꿈

  printf("%f\n", avg); // 93.666667
  
  int a, b;

  scanf("%d%d", &a, &b);  // &: 포인터

  int hap = a + b;
  int cha = a - b;
  int gop = a * b;
  int mok = a / b;

  printf("%d + %d = %d\n", a, b, hap);
  printf("%d - %d = %d\n", a, b, cha);
  printf("%d * %d = %d\n", a, b, gop);
  printf("%d / %d = %d\n", a, b, mok);
}

