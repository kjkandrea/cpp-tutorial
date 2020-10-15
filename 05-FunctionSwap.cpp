#include <stdio.h>

void swap(int *arg1, int *arg2) { // call by address
  int tmp = *arg1;
  *arg1 = *arg2;
  *arg2 = tmp;
}

int main() {
  int a = 2;
  int b = 5;
  
  swap(&a, &b);

  printf("a : %d, b : %d", a, b);
}