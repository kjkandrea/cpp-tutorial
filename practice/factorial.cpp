#include <stdio.h>

// 5 * 4 * 3 * 2 * 1 == 120
// n! = n * (n - 1)!

int fectorial(int n) {
  printf("n : %d\n", n);
  if (n == 1) return 1; // 🚫
  return n * fectorial(n - 1);
}

int main() {
  int result = fectorial(5);
  printf("%d\n", result);
}