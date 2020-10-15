#include <stdio.h>

int main() {
  int a, b;

  scanf("%d%d", &a, &b);

  int tmp = a;
  a = b;
  b = tmp;

  printf("a : %d, b : %d", a, b);
}