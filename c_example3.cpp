#include <stdio.h>

/*
    1. 
    정수 하나를 매개변수로 받아
    그 수가 짝수이면 0, 홀수이면 1을 반환하는 함수를 작성해라
*/
int parity(int n) {
  // 작성
  // 내가 쓴 답
  if (n % 2 == 0) {
    return 0;
  }
  return 1;

  // // 축약
  return (n % 2 + 2) % 2;

}

/*
  2. 다음 프로그램의 실행 결과는 ?

*/
int useCnt[5] = {0};

void useItem(int);


// 3. 다음 프로그램의 실행 결과는 ? // 이거 이해하면 재귀함수 절반은 이해된거임

void rec(int n) {
  if (n == 0) return;
  printf("%d ", n);
  rec(n - 1);
  printf("%d ", n);
}

/*
  4.
  문자열을 매개변수로 받아 그 문자열에서 공백을 제거하여
  출력하는 함수를 만들어라.
*/

void print_noSpace(char *str) {  
  // 작성
  
    for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] != ' ') {
        printf("%c", str[i]);
      }
    }
}

int main() {
  printf("%d\n", parity(5));
  printf("%d\n", parity(-3));
  printf("%d\n", parity(6));  

  // 2.

  useItem(4);
  useItem(2);
  useItem(1);
  useItem(4);
  useItem(0);

  for (int i = 0; i < 5; i++) {
    printf("슬롯 %d번 아이템을 %d번 썼습니다.\n", i, useCnt[i]);
  }  

  // 3.

  // rec(5);

  //4 .

  print_noSpace("Hello, world\n");
  print_noSpace("my name is sw\n");
}

void useItem(int itemNum) {
  useCnt[itemNum]++;
}