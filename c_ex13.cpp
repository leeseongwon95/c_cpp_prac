#include <stdio.h>
#include <string.h>  // strcmp 함수가 선언된 헤더 파일


// 문자열 : 문자들이 열거
// 맨뒤에 \n 가 붙어있음 
int main() {
  char arr[] = "Hello, World!";

  printf("배열의 크기 : %lu\n",sizeof(arr) / sizeof(char));
  char s[100];
  scanf("%s", s);  // 문자열 scanf 는 & 필요없음 !
  printf("%s\n", s);


  // 문자열 길이

  char str[100] = "hello";
  int len;
  len = strlen(str); 
  printf("문자열의 길이는 %d\n", len);


  // 문자열 복사

  char str1[] = "hello";
  char str2[100];
  strcpy(str2, str1); // 카피
  printf("str2의 값 : %s\n", str2);

  // 문자열 이어쓰기

  char str[100] = "hello";
  strcat(str, " World!"); // 뒤에 덧붙임
  printf("%s\n", str);

  // 문자열 비교

  // 한 가지 주의할 점이 있는데 strcmp 함수는 운영체제에 따라서 동작 방식이 조금 다르다는 점입니다.
  // Windows(Visual Studio)에서는 문자열이 다르면 1과 -1을 반환하지만 리눅스와 OS X에서는 ASCII 코드값의 차이를 반환합니다.
  // 그러므로 리눅스와 OS X에서 strcmp의 반환값을 판단할 때는 switch 분기문 대신 if조건문을 사용해야 합니다.

  char s1[20];
  char s2[20];

  printf("문자열 두 개를 입력하세요: ");
  scanf("%s %s", s1, s2);

  int ret = strcmp(s1, s2);    // 입력된 문자열 비교

  printf("반환값: %d\n", ret);

  // 리눅스와 OS X에서는 ASCII 코드값의 차이를 반환하므로
  // if 조건문으로 판단

  if (ret == 0)
  {
      printf("두 문자열이 같음\n");
  }
  else if (ret > 0)    // 양수일 때
  {
      printf("%s보다 %s가 큼\n", s2, s1);
  }
  else if (ret < 0)    // 음수일 때
  {
      printf("%s보다 %s가 큼\n", s1, s2);
  }


}