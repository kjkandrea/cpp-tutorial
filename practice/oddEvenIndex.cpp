#include <stdio.h>

int main() {
  // input
  int count;
  printf("입력할 숫자의 갯수 : ");
  scanf("%d", &count);

  int arr[100];
  for (int i = 0;i < count;i++) {
    scanf("%d", &arr[i]);
  }

  printf("입력 종료\n");
  
  // output
  for (int i = 1; i < count; i += 2) { // even
    printf("%d ", arr[i]);
  }
  printf("\n");

    for (int i = 0; i < count; i += 2) { // odd
    printf("%d ", arr[i]);
  }
  printf("\n");
}