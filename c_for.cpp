#include <stdio.h>

int main() {
  int i;
  
  /* while (i <= 10) {
    printf("%d\n", i);
    i++;
  } */

  for (i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }

  // 일정하게 증가/감소되는 변수가 필요할 때
  // 배열을 사용할 때 (배열과 for문은 붙어있음)
  // 배열의 모든 원소에 접근하고 싶을 때, 순차적으로 접근하고 싶을 때
  // 특정횟수만큼 반복하고 싶을 때  

  // 1, 2, 4, 8, 16, 32...

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i *= 2) {
    printf("%d\n", i);
  }

  // 1 ~ n 까지 합을 출력

  int n;
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i < n + 1; i++) {
    sum += i;
    
  }
  printf("%d\n", sum);

  int n;
  scanf("%d", &n);

  for (int i = 1; i < n; i++) {
    printf("***\n");
  }

  // 무한루프 

  for (int i = 1; true; i++) {
    printf("%d\n", i);
  }
  int i;
  for (; ; i++) {
    printf("%d\n", i);
  }

  // 2의 제곱
  int n;
  scanf("%d", &n);

  int i = 0, t = 1;
  while (i <= n) {
    printf("2^%d = %d\n", i, t);
    i++;
    t *= 2;
  }

  
  for (int i = 0, t = 1; i <= n; i++, t *= 2) {
    printf("2^%d = %d\n", i, t);
  }

  int n;
  scanf("%d", &n);

  int i, sum;
  for (i = 1, sum = 0; i < n; sum += 2, i++);

  printf("%d\n", sum);

  // break : 반복문 한 개를 빠져나옴
  // 숫자 입력 -> 숫자 출력
  // 1번째: 7
  // 2번째: 5
  // ..
  //
  for (int i = 1; ; i++) {
    int k;
    scanf("%d", &k);

    if (k == 0) break;

    printf("%d번째 : %d\n", i, k);
  }


  // contiue

  int n;
  scanf("%d", &n);

  // 1+2+4+5+7+8+10+11+13
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    if (i % 3 != 0) {
      sum += i;
    }
  }
  printf("%d\n", sum);

  // 굳이 continue를 왜 써야하는지는 모르겠음 위에 코드처럼 짜면 됨 (가독성이 좋다는 이유 ? 같음)
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0) {
      continue; // 루프를 건너뛰겠다
    }
    sum += i;
  }
  printf("%d\n", sum);


  // 중첩 for 문

  int n;
  scanf("%d", &n);

  // 별찍기
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }


  // 직각 삼각형

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j <= i; j++) {
	    printf("*");
    }
    printf("\n");
  }

  // 역직각 삼각형

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5 - i; j++) {
	    printf("*");
    }
    printf("\n");
  }

  // // 피라미드

  for (int i = 0; i < 5; i++) {
    for (int j = 5 - 1; j > i; j--) {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++) {
      printf("*");
    }
    printf("\n");
  }

  // 역 피라미드

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < i; j++) {
      printf(" ");
     }
    for(int k = 2 * 5 - 1; k > 2 * i; k--) {
	    printf("*");
    }
    printf("\n");
  }

  // 다이아몬드 (피라미드 두개)

  for (int i = 0; i < 5; i++) {
    for (int j = 5 - 1; j > i; j--) {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++) {
      printf("*");
    }
    printf("\n");
  }
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < i; j++) {
      printf(" ");
     }
    for(int k = 2 * 5 - 1; k > 2 * i; k--) {
	    printf("*");
    }
    printf("\n");
  }
}
