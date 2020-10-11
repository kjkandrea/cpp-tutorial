#include <stdio.h>

int main() {
  int arr[5];

  for (int i = 0;i <= 4;i++) {
    arr[i] = i * 8;
  }

  for (int i = 0;i <= 4;i++) {
    printf("%d ", arr[i]);
  }
}