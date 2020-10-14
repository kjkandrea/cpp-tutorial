#include <stdio.h>

int main() {
  int arr[3][4] = {
    {3, 8, 14, 5},
    {6, 1, 22, 7},
    {4, 10, 11, 2}
  };

  for (int i = 0;i < 3;i++) {
    for (int j = 0;j < 4;j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}