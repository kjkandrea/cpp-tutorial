#include <stdio.h>

int main() {
  int arr[] = {3, 5, 45, 76, 32, 35, 88, 45, 3, 4, 7};

  int count = 0;
  for (int i = 0;i < sizeof(arr) / sizeof(int);i++) {
    if (arr[i] % 2) count++;
  }

  printf("arr[]에 홀수가 총 %d개 있네요.\n", count);
}