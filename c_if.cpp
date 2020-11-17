#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("짝수입니다\n");
  } else {
    printf("홀수입니다\n");
  }

  // 참: 1, 거짓: 0
  if (n % 2) {
    printf("홀수입니다\n");
  }
  else {
    printf("짝수입니다\n");
  }

  // 참: 1, 거짓: 0
  if (0) {
    printf("***\n");
  }
  else {
    printf("$$$\n");
  }

  int n;
  scanf("%d", &n);

  if (n > 0) 
  {
    printf("양수입니다\n");  
  }
  else if (n == 0)
  {
    printf("0입니다\n");
  }
  else
  {
    printf("음수입니다\n");
  }
  
  // 중첩 if 문 
  // 중괄호 코딩 스타일

  int a,b,c;

  scanf("%d%d%d", &a,&b,&c);

  if (a > b) {
    if (a > c) printf("%d\n", a);
    else printf("%d\n",c);
  } else if (b < c) printf("%d\n",b);
  else printf("%d\n",c);
}