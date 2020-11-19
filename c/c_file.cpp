#include <stdio.h>

int main() {
  FILE *in, *out; // 스트림 
  int n;
  // r : 읽기   w: 쓰기   a: 이어쓰기
  in = fopen("input.txt", "r");
  // out = fopen("output.txt", "a");

  // 파일이 존재하지 않을 가능성이 있음. 그런경우
  if (in != NULL) {
    fscanf(in, "%d", &n);
    printf("%d\n", n);
    fclose(in);
    // fclose(out);
  } 

  FILE *in = fopen("c_file.cpp", "r");
  char ch;
  while (fscanf(in, "%c", &ch) != EOF) { // 보통 이걸 더 많이 씀
    printf("%c", ch);
  }
  // while(!feof(in)) {    // 파일의 끝에 도달했을때 true 를 반환
  //   fscanf(in, "%c", &ch);
  //   printf("%c", ch);
  // } 
  fclose(in);
}