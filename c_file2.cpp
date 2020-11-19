/*
  getchar / putchar : 문자를 입력 / 출력 -- 효율적임
  gets / puts : 문자열을 입력 / 출력  위험성이 있음

  scanf printf 보다 속도가 빨라서 많은양을 입출력 할때는 위에껄 써라 
*/

/*
  sscanf / sprintf 
*/

#include <stdio.h>

int main() {
  // char ch;
  char str[100];

  // ch = getchar();
  // putchar(ch);

  gets(str);
  puts(str);

  char str[] = "450";
  int n;

  sscanf(str, "%d", &n);
  printf("n의 값 : %d\n", n);

  int n = 450;
  char str[100];

  sprintf(str, "%d", n);
  printf("%s\n", str);
}