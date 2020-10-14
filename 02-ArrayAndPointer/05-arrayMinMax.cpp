#include <stdio.h>

int main() {
  int arr[] = {6, 23, 9, 3, 6, 4, 8};

  int min = arr[0];
  int max = arr[0];

  for (int i = 1;i < sizeof(arr) / sizeof(int);i++) {
    if (min > arr[i]) min = arr[i];
    if (max < arr[i]) max = arr[i];
  }

  printf("min : %d, max : %d", min, max);
}