#include <stdio.h>

int main() {

  // 1. 두 숫자를 입력 받아서 그 숫자들의 합을 출력하는 프로그램 
  int a,b;
  scanf("%d%d", &a, &b);
  printf("%d + %d = %d\n", a, b, a+b);

  // 2. 체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들어라.
  float weight,height;

  printf("체중(kg)을 입력하세요 : ");
  scanf("%f", &weight);
  printf("키(m)를 입력하세요 : ");
  scanf("%f", &height);

  float bmi = weight / (height*height);

  if (bmi >= 35)
    printf("당신의 체질량 지수는 : %f 이고, 고도비만 입니다. ", bmi);  
  else if ((30 <= bmi) && (bmi < 35))
    printf("당신의 체질량 지수는 : %f 이고, 중등도비만 입니다. ", bmi);
  else if ((25 <= bmi) && (bmi < 30))
    printf("당신의 체질량 지수는 : %f 이고, 경도비만 입니다. ", bmi);
  else if ((23 <= bmi) && (bmi < 25))
    printf("당신의 체질량 지수는 : %f 이고, 과체중 입니다. ", bmi);
  else if ((18.5 <= bmi) && (bmi < 23))
    printf("당신의 체질량 지수는 : %f 이고, 과체중 입니다. ", bmi);
  else if (bmi < 18.5)
    printf("당신의 체질량 지수는 : %f 이고, 과체중 입니다. ", bmi);
  else 
    printf("오류입니다.");

  // 3 . 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어라.

  char alpha;

  scanf("%c", &alpha);

  char nextAlpha = alpha + 1;

  printf("%c\n", nextAlpha);


}

