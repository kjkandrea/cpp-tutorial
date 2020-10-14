#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;

  int *ptr;
  ptr = &a;

  printf("현재 ptr이 가르키는 변수의 값 : %d\n", *ptr);

  ptr = &b;
  printf("현재 ptr이 가르키는 변수의 값 : %d\n", *ptr);
}