#include <stdio.h>
// 1. 다음 프로그램의 출력은 ?

typedef int Point[2];
typedef Point *PointPtr;


// 2. 빈칸에 들어갈 코드는 ?

struct Point {
  int x, y;
};

void pSwap(Point *p) {
  // x좌표와 y좌표를 교환
  int tmp = p -> x;
  p -> x = p -> y;
  p -> y = tmp;
}

// 3. 코드에서 pSwap 함수를 Point 구조체에 집어 넣어라.

struct Point {
  int x, y;
  void pSwap() {
    int tmp = x;
    x =  y;
    y = tmp;
  }
};



int main() {
  // Point p = { 3, 4 }; // int p[2] = { 3, 4 };
  // PointPtr pp = &p; // Point *pp =&p;

  // printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1]); // 3 3 4 
  // // *(*pp) == *p == p[0]

  Point pos = { 3, 4 };
  pos.pSwap();
  printf("(%d %d)\n", pos.x, pos.y);
}