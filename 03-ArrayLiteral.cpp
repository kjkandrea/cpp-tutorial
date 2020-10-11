#include <stdio.h>

int main() {
  int arr[] = {5, 6, 9, 12, 20};

  for (int i = 0;i < sizeof(arr) / sizeof(int);i++) {
    printf("%d ", arr[i]);
  }
}