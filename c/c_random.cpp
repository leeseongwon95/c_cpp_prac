// 난수

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int p() {
  exit(0); // 바로 종료
  // return 이면 함수를 다시호출하면 값이 나옴
}

int main() {
  // seed
  srand(time(NULL)); // 1970/1/1 00:00:00로 부터 지난 시간을 초단위로 나타낸 것

  for (int i = 1; i <= 10; i++) {
    printf("%d\n", rand() % 10 + 1);    
  }

  // exit(0) : return 이랑 비슷함

  int sum = 0;

  for (int i = 0; i < 5; i++) {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
      printf("INPUT ERROR\n");
      exit(0);
    }
    sum += n;
  }
  printf("%d\n", sum);
}
