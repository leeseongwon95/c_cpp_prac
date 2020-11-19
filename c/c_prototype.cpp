#include <stdio.h>

// prototype : 원형 , 시제품 || 만약 함수 두개에서 서로 호출하면 실행이 안됨 하지만 방법이 있음
// 이렇게 ; 세미콜론을 붙여주면 사용가능 이것을 프로토타입이라고 함.
/* 프로토타입 장점 :
    1. 함수가 서로 호출하는 상황에서 해결책 역할 
    2. 함수들의 선언 순서에 신경안써도됨 
    3. 쭉 안내려봐도 어떤 함수가 있는지 한눈에 파악가능 
    4. 코드를 더 확인하기 쉽게 해줌 
 */

// 걷기
void walk(int); // 변수 이름을 지워줘도 됨;
//돌기
void rotate(int);
void drawSquere();

int main() {
  drawSquere();
}

// 걷기 
void walk(int distance) {
  printf("%dcm 를 걸었습니다.\n", distance);
}

// 돌기
void rotate(int angle) {
  printf("%d도 회전했습니다.\n", angle);
}

void drawSquere() {
  for (int i = 1; i <= 4; i++) {
    walk(10);
    rotate(90);
  }
}