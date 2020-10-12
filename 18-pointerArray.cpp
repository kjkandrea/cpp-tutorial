#include <stdio.h>

int main() {
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  printf("arr의 값 : %p\n", arr);

  for (int i = 0;i < 10;i++) {
    printf("arr[%d] = %p\n", i, &arr[i]);
    printf("arr + %d = %p\n", i, arr + i);
  }
  
  printf("arr == &arr[0] ? %d\n", arr == &arr[0]);
}