#include <stdio.h>

int main() {
  int *ptr[4]; // 포인터 배열
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;

  ptr[0] = &a;
  ptr[1] = &c;
  ptr[2] = &d;
  ptr[3] = &b;

  printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);
}