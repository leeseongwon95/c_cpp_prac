#include <stdio.h>

struct Time {
  int h, m, s;
};

int totalSec(Time t) {
  return 3600 * t.h + 60 * t.m + t.s;
}

struct Point {
  int x, y;

  void moveRight() { x++; }
  void moveLeft() { x--; }
  void moveUp() { y++; }
  void moveDown() { y--; }
};

int main() {
  Time t = { 1, 22, 48};
  printf("%d\n", totalSec(t)); // t.totalSec() 가능

  Point p = { 2, 5 };
  p.moveDown();
  p.moveRight();

  printf("(%d, %d)\n", p.x, p.y);

}