#include <stdio.h>

int main() {
  // 2차원 배열

  int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11 ,12}
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  // 파스칼의 삼각형

  /* 
    1
    1 1
    1 2 1
    1 3 3 1

    j == 0 || j = i -> 1
    i행 j열 = [i-1 j-1] + [i-1 j]
  */

  int p[10][10];

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        p[i][j] = 1;
      } else {
        p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
      }
      printf("%d ",p[i][j]);
    }
    printf("\n");
  }






}