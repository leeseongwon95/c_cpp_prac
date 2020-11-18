#include <stdio.h>

// 1. 시험점수 입력
// A 90 ~ 100
// B 80 ~ 89
// C 70 ~ 79
// D 60 ~ 69
// E 50 ~ 59
// F 49 이하

int main() {
  int score;
  scanf("%d", &score);

  if (score > 100 || score < 0) 
    printf("잘못입력했습니다\n");
  else if (score >= 90)
    printf("A\n");
  else if (score >= 70)
    printf("B\n");  
  else if (score >= 70)
    printf("C\n");
  else if (score >= 60)
    printf("D\n");
  else if (score >= 50)
    printf("E\n");
  else
    printf("F\n");  

  // 자연수 입력 : 12
  // 1, 2, 3, 4, 6, 12 약수

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n / 2; i++) { // 나누기 2 한이유는 마지막에 12을 뒤로 빼서 출력하기 위해
    if (n % i == 0) {
      printf("%d, ", i);
    }
  }
  printf("%d\n", n); // 맨 마지막 수에 , 가 나오는 것을 따로 빼서 방지

  // 일의 자릿수가 3, 6, 9 인 경우
  // 1 2 * 4 5 * 7 8 * 10 11 12 * 14 15 * 17 ...

  int n;
  scanf("%d", &n);

  for (int i = 1; i < n; i++) {
    int k = i % 10;
    if (k == 3 || k == 6 || k == 9) {
      printf("* ");
    } else {
      printf("%d ", i);
    }


  } 
  printf("\n");

  /* 
    n = 4
    1
    1 3
    1 3 5
    1 3 5 7

    2k - 1
  */

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 2 * i - 1; j += 2) {
      printf("%d ", j);
      // printf("%d ", 2 * j - 1) 도 가능 j <= i , j++ 로 바꿔줘야함
    }
    printf("\n");
  }

  /* 
    n = 4

    1
    1 2 3
    1 2 3 4 5
    1 2 3 4 5 6 7

    i번째 줄에서 출력되는 숫자의 개수 2 * i - 1
  */

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}