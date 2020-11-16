#include <stdio.h>

int main() {
  // int choice;

  // makeChoice:

  // printf("새 게임 : 1\n");
  // printf("불러오기 : 2\n");
  // printf("설정 : 3\n");
  // printf("크레딧 : 4\n");

  // scanf("%d", &choice);

  // switch(choice) {
  //   case(1): printf("새 게임 : 1\n"); break;
  //   case(2): printf("불러오기 : 2\n"); break;
  //   case(3): printf("설정 : 3\n"); break;
  //   case(4): printf("크레딧 : 4\n"); break;
  //   default: 
  //     printf("숫자를 다시입력해주세요\n");
  //     // go to
  //     goto makeChoice; // 쓰면 코드가 더러워짐 (스파게티코드)
  //     break;
  // }

  // // while
  // int i = 1;

  // repeat:
  // printf("%d\n", i);
  // if (i < 10) {
  //   i++;
  //   goto repeat; // 긍정적으로 쓰일 경우
  // }

  // // 반복문 (while)
  // int i = 1;

  // while (i <= 10) {
  //   printf("%d\n", i);
  //   i++;
  // }
  
  // // do while

  // int i = 1;
  // do {
  //   printf("%d\n", i);
  //   i++;
  // } while (i <= 10);

  // // 무한 루프
  // int i = 1;

  // while (i <= 10) {
  //   int i = 1;
  //   while (true) {
  //     printf("%d", i);
  //     i++;
  //   }
  // }

  // do while 가 쓰일 경우 (무조건 한번은 실행되어야 할때)
  
  int n;

  do {
    printf("제발 0을 입력해주세요!\n");
    scanf("%d", &n);
  } while (n != 0);
  printf("드디어 입력했군..!\n");
}