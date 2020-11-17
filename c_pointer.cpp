#include <stdio.h>

// 포인터 : 변수의 주소를 저장하는 변수
int main() {
  int a = 20;
  
  int * ptr_a;
  ptr_a = &a; // & : 주소값

  printf("a의 값 : %d\n", a);
  printf("a의 주솟값 : %p\n", &a);
  printf("ptr_a에 저장된 값 : %p\n", ptr_a);
  printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);

  int a = 10;
  int b = 20;

  int * ptr;

  ptr = &a;
  printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);
  ptr = &b;
  printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);


  // 포인터에 값을 저장

  int a = 10;

  int * ptr;
  ptr = &a;

  printf("a의 값 : %d\n", a);
  *ptr = 20;
  printf("a의 값 : %d\n", a);

  // 실무에선 잘 쓰이지 않지만 포인터에 대한 이해
  int a = 10;

  int * ptr;
  ptr = &a;

  int ** ptr_ptr;
  ptr_ptr = &ptr;

  printf("a = %d\n", a);
  printf("&a = %p\n", &a);

  printf("ptr = %p\n", ptr);
  printf("&ptr = %p\n", &ptr);

  printf("**ptr_ptr = %d\n", **ptr_ptr);
  
}