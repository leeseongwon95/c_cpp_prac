#include <stdio.h>

#define PRINT_HELLO printf("Hello, World!")

#define SQUARE(X) ((X) * (X)) // 괄호가 없으면 ? 값이 이상해짐 매개변수가 있는 매크로를 사용할때는 괄호를 쳐줘야함

#define MAX(A, B) (((A) > (B)) ? (A) : (B))

#define FOR(I, S, E) for (int I = S; I <= E; I++)
#define LOOP while (true)

int main() {
  PRINT_HELLO;

  int a;
  scanf("%d", &a);
  printf("%d\n", SQUARE(a - 1)); // 괄호가 없어서 100 / a * a 가 되어버림

  int a = 5, b = 10;
  printf("%d\n", MAX(a, b));

  FOR(i, 1, 10) {
    printf("%d\n", i);
  }

  LOOP {
    printf("*\n");
  }
}