#include <stdio.h>

// // 전역변수
int itemCnt = 0;
int money = 100;


int buyItem(int cost, int cnt) { // cost : 매개변수
  if (money >= cost) {
    // 아이템을 산다.
    itemCnt += cnt;
    money -= cost;
    printf("아이템을 구매했습니다.\n");
    printf("  아이템 개수 : %d\n", itemCnt);
    printf("  잔액 : %d\n", money);
    return 0;
  } else {
    printf("잔액이 부족합니다.\n");
    return -1;
  }
}

// 2개의 매개변수 (정수) 합을 반환

int plus(int a, int b) {
  return a + b;
}

// return ?

int noMeaning() {
  printf("first\n");
  return 1; // return 을 한 번 이라도 만나면 그자리에서 바로 종료 : 함수값을 1로 정의한다는 의미
  printf("second\n");
  return 2;
}
int main() {
  // int a; // 지역변수
  int result;

  result = buyItem(3000, 5);
  if (result == -1) {
    printf("돈이 부족하시군요\n");
  }
  
  
  buyItem(50, 7);

  // return : 돌려주다, 반환 

  int a;
  a = printf("aaa\n");
  printf("%d\n", a);
  int sum = plus(2, 3);
  printf("%d\n", sum);

  int a;
  a = noMeaning();
  printf("반환된 값 : %d\n", a);
}