#include <stdio.h>

int parity(int n) {
  if (n < 0) return -n % 2;
  return n % 2;
}

int main() {
  printf("%d\n", parity(5));
  printf("%d\n", parity(-3));
  printf("%d\n", parity(6));
}