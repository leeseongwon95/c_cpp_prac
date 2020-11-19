#include <stdio.h>

int main() {

/*
  100개 이하의 정수를 입력받아
  첫 줄에 짝수 번째 숫자들을 순서대로 출력하고,
  다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어보세요.

  입력 예
  7
  3 1 4 1 5 9 2

  출력 예
  1 1 9
  3 4 5 2
*/

  int n;
  int arr[105]; // 넉넉하게 잡기

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i < n; i += 2) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < n; i += 2) {
    printf("%d ", arr[i]);
  }
  printf("\n");

// 코드 보고 값 맞추기
int a = 10;
int b = 20;

int *ptr;

ptr = &a;
*ptr = 30;

ptr = &b;
*ptr = 10;

printf("%d ", a); // 30
printf("%d ", b); // 10
printf("%d ", *ptr); // 10


// 코드보고 값 맞추기
  int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

  printf("%p\n", arr); // 100이 출력되었다고 가정
  for (int i = 3; i < 7; i++) {
    printf("%p %d\n", arr + i, *(arr + i));
  }


// 100
// 112 1
// 116 5
// 120 9
// 124 2 

/*
  10 * 10 이하의 정수형 이차원 배열을 입력받아 
  그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어보세요.

  입력 예
  3 4
  4 2 6 3
  7 9 3 4
  5 1 2 1

  출력 예
  15
  23
  9
*/
  // int n, m;
  // int arr[12][12];

  // scanf("%d%d", &n, &m);
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     scanf("%d", &arr[i][j]);
  //   }
  // }
  // int sum = 0;
  // for (int i = 0; i < n; i++) {
  //   int sum = 0;
  //   for (int j = 0; j < m; j++) {
  //     sum += arr[i][j];
  //   }
  //   printf("%d\n", sum);
  // }

  // 코드 보고 값 읽기 (주소값은 100 으로)
  // int arr[3][3] = {0};

  // printf("%d\n", &arr); // 100
  // printf("%d\n", arr); // 100
  // printf("%d\n", *arr); // 100
  
  // printf("%d\n", &arr[0]); // 100
  // printf("%d\n", arr[0]); // 100
  // printf("%d\n", *arr[0]); // 0

  // printf("%d\n", &arr[0][0]); // 100

  // printf("%d\n", arr[0][0]); // 0

  // 코드 보고 출력 값 읽기 (주소값은 100)

  // int arr[3][3] = { 0 };
  // printf("%d\n", &arr[0][0]); // 100

  // printf("%d\n", arr[0] + 1); // 104
  // printf("%d\n", &arr[0] + 1); // 108 한 행을 가리키는 포인터니까 + 1을 하면 ? 그 다음 행으로 넘어감
  // printf("%d\n", arr + 1); // 108 &arr[0] 과 같음
  // printf("%d\n", &arr + 1); //  136  2차원 배열 전체 + 1 이니까 3x3을 넘어서 여서 

  //코드 오류 찾기
  /*
  int arr[3][4] = {
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 }
  };

  int(*ptr)[4] = arr;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", *ptr[i][j]);
    }
    printf("\n");
  }
  */

  // int arr[3][4] = {
  //   { 1, 2, 3, 4 },
  //   { 5, 6, 7, 8 },
  //   { 9, 10, 11, 12 }
  // };

  // int(*ptr)[4] = arr; // 배열 포인터를 선언해서 2차원 배열의 0번째 행 전체의 주소를 집어넣음 다시말해서, &arr[0] 을 집어넣음
  // // 이 포인터 자체를 2차원 배열로 쓸 수 있음
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     printf("%d ", ptr[i][j]);
  //   }
  //   printf("\n");
  // }
}