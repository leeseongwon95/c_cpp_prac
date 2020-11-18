#include <stdio.h>

// const, 매크로, enum
// #define PI 3.141592 // 메모리상에 저장이 안되어있음, 매크로라고 부름

enum EGAMESTATE { // 값을 생략해도 번호를 매겨 줌 유연한 문법을 가지고 있음
  GAMESTATE_MAINMENU,
  GAMESTATE_PLAYING,
  GAMESTATE_PAUSED,
  GAMESTATE_GAMEOVER  
};

int main() {
  // const float PI = 3.141592; // 상수로 선언 값을 바꿀수없음, 상수는 대문자로 쓴다.
  // float a = PI;
  // printf("%.2f\n", PI);

  int currState = GAMESTATE_MAINMENU;
  while (true) {
    switch (currState) {
      case GAMESTATE_MAINMENU:
        break;
      case GAMESTATE_PLAYING:
        break;
      case GAMESTATE_PAUSED:
        break;
      case GAMESTATE_GAMEOVER:
        break;
    }
  }
}