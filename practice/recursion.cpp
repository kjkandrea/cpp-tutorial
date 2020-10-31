#include <stdio.h>

int rec(int n) {
  if (n == 0) return -1;
  printf("top %d\n", n);
  rec(n - 1);
  printf("bottom %d\n", n);
  return n;
}

int main() {
  printf("return : %d", rec(5));
}