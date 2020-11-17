#include <stdio.h>

int main() {
  int a[5];

  for (int i = 0; i <= 4; i++) {
    a[i] = i * 5;
  }
  for (int i = 0; i <= 4; i++) {
    printf("%d\n", a[i]);
  }

  // Array
  int arr[] = {3, 1, 4, 1, 5, 1, 2, 3, 4, 5, 6};
  
  // sizeof
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) { // sizeof(arr) / sizeof(int) 배열에 들어있는 원소의 개수를 알 수 있음
    printf("%d ", arr[i]);
  }
  printf("\n");

  // 입력받은 숫자들을 거꾸로 출력

  int n;
  int arr[1000]; // 백만개까지는 실행이 됨
  
  printf("입력할 숫자의 개수 입력 : ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = n - 1; i >= 0; i--) { // 거꾸로
    printf("%d ", arr[i]);
  }

  // 최대, 최소

  int n;
  int arr[100];

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) max = arr[i];
  }
  printf("%d\n", max);

  // 짝수의 개수

  int n;
  int arr[100];

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      cnt++;
    }
  }
  printf("%d\n", cnt);
  
}