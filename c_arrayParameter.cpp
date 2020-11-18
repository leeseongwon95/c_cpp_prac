// 배열을 매개변수로 넘기기

#include <stdio.h>

// call-by-value : 값만 전달
// call-by-reference : 참조에 의한 전달

void printArr(int *arr) {
  for (int i = 0; i < 4; i++) {
      arr[i] -= 2; // == *(arr + i)
  }
}

// 주소값이 넘어왔으니까 call by reference 임 
void printArr(int (*arr)[3]) { // 0번째 행의 전체 주소값이 들어옴 (헷갈림) 2차원 배열에서는 배열포인터를 써줌 단순하게 int[2][3] 이 넘어와도 됨
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]); 
    }
    printf("\n");
  }
}

int main() {
  int arr[] = { 1, 2, 3, 4 };
  printArr(arr); // == &arr[0]

  for (int i = 0; i < 4; i++) {
    printf("%d\n", arr[i]);
  }

// 2차원 배열
int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
printArr(arr); // 여기서 &arr[0] 이니까 arr[0]의 주소값이 파라미터로 들어감
}   