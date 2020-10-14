#include <stdio.h>

int main() {
  int arr[3][3] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };

  printf("%p\n", &arr); // arr address
  printf("%p\n", arr); // arr[0] address
  printf("%p\n", *arr); // arr[0][0] address

  printf("%p\n", &arr[0]); // arr[0] address
  printf("%p\n", arr[0]); // arr[0][0] address
  printf("%d\n", *arr[0]);  // arr[0][0]

  printf("%p\n", &arr[0][0]); // arr[0][0] address
  printf("%d\n", arr[0][0]); // arr[0][0]

  printf("%p\n", &arr[0][0]); // arr[0][0] address

  printf("%p\n", arr[0] + 1); // arr[0][0] address + 4
  printf("%p\n", &arr[0] + 1); // arr[0] address + 12
  printf("%p\n", arr + 1); // arr[0] address + 12
  printf("%p\n", &arr + 1); // arr address + 36
}