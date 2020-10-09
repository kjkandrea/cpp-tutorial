#include <stdio.h>

int main() {
  int a, b;

  scanf("%d%d", &a, &b);

  int sum = a + b;
  int diff = a - b;
  int prod = a * b;
  int division = a / b;

  printf("sum %d + %d = %d\n", a, b, sum);
  printf("diff %d - %d = %d\n", a, b, diff);
  printf("prod %d * %d = %d\n", a, b, prod);
  printf("division %d / %d = %d\n", a, b, division);
}