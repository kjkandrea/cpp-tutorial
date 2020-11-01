#include <stdio.h>

int sum(int x, int y) {
  return x + y;
}

int main() {
  int a = sum(5, 10);

  printf("%d", a);
}