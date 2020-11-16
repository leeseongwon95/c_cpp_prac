#include <stdio.h>

int main(){
  char a = 67;

  printf("%c\n",a); // 'C' = 67

  char a;
  scanf("%c", &a);
  printf("%c의 ASCII 숫자 값 : %d\n", a, a);

  int a;
  scanf("%d", &a);
  printf("%d의 ASCII 문자 값 : %c\n", a, a);
  
}