#include <stdio.h>

int main() {
  // 2차원 배열과 배열 포인터
  int arr[2][3] = { {1,2,3}, {1,2,3} };

  printf("%lu\n", sizeof(arr)); // 24
  printf("%lu\n", sizeof(arr[0])); // 12
  printf("%lu\n", sizeof(arr[0][0])); // 4

  printf("%p\n", &arr); 
  printf("%p\n", &arr[0]); 
  printf("%p\n", &arr[0][0]); 

  /*
    1. arr = &arr[0]
    2. *arr = arr[0]
    3. arr + 1 = arr 에 sizeof(*arr)를 더한값
  */

  int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

  int(*ptr)[3] = arr; // arr == &arr[0]

  // // 1. ptr[i] == arr[i] ? 
  // // 2. ptr[i][j] == arr[i][j] ?
  // // 3. ptr == arr ?  // 이 말은 즉 arr == &arr[0] 이니까 ptr == &arr[0] 이다. ptr == arr[0]

  // // ptr 은 행 전체를 가리키는 포인터이고 , ptr에 1을 더할 때마다 그 다음 행을 가리킨다고 이해 그러면 1번 성립
  // // 1번이 성립하니까 2번도 성립

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

  for (int(*row)[3] = arr; row < arr + 2; row++) {
    for (int(*col) = *row; col < *row + 3; col++) {
      // row는 3개짜리 배열을 가리키고 있으므로 
      // *row 자체가 하나의 배열을 의미하게 되고,
      // 따라서 col 에는 *row 즉, &(*row)[0] 이 들어가게 됨
      printf("%d ", *col);
    }
    printf("\n");
  }
}