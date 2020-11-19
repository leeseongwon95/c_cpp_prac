#include <stdio.h>

int main() {
  int a = 10;
  int * ptr_a = &a;

  printf("ptr_a의 값 : %p\n", ptr_a);
  printf("ptr_a + 1 의 값 : %p\n", ptr_a + 1); // 1을 더했지만  int는  4 바이트  이기 때문에 4가 증가한 주소값을 가지게 됨

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  printf("arr의 값 : %p\n", arr);  // 완전히 똑같음 arr == &arr[0]
  for (int i = 0; i < 10; i++) {
    printf("arr[%d] = %p\n", i, &arr[i]);
    printf("arr + %d = %p\n", i, arr + i);  // arr + i 의 값과 &arr[i] 의 값이 같다!
  }

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  for (int i = 0; i < 10; i++) {
    printf("%d ", *(arr + i));
  }
  printf("\n");
  for (int * ptr = arr; ptr < arr + 10; ptr++) { // arr == &arr[0] 이니까  ptr++ 는 ptr + 1 이니까 4바이트가 올라가는 것임
    printf("%d ", *ptr);
  }
  printf("\n");

  // 배열 포인터

  int arr[3] = {1, 2, 3};
  int *ptr = arr;

  for (int i = 0; i < 3; i++) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
  for (int i = 0; i < 3; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");

  // arr[i] == *(arr + i) == *(ptr + i) == *(i + ptr) == i[ptr]
  // a[b] -> *(a + b)
  for (int i = 0; i < 3; i++) {
    printf("%d ", i[ptr]);
  }
  printf("\n");

  /*
    1. ptr == &ptr[0]
    2. *ptr == ptr[0]
    3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
  */

  int arr[3] = {1, 2, 3}; // 12 바이트 

  printf("arr = %p\n", arr);
  printf("arr + 1 = %p\n", arr + 1);

  printf("&arr = %p\n", &arr);
  printf("&arr + 1 = %p\n", &arr + 1); // 12 바이트가 늘어남 why ? arr 가 12바이트이기때문

  int arr[3] = {1, 2, 3};

  int (*ptr_arr)[3]; // 길이 3인 int 형 배열을 가리키는 포인터를 선언
  // ptr_arr = &arr;

  for (int i = 0; i < 3; i++) {
    printf("%d ", (*ptr_arr)[i]);
  }
}