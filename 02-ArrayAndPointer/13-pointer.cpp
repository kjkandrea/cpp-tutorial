#include <stdio.h>

int main() {
  int a = 20;

  int *ptr_a;
  ptr_a = &a;

  printf("a의 값 : %d\n", a);
  printf("a의 주소값 : %p\n", &a);
  printf("ptr_a의 값 : %p\n", ptr_a);
  printf("ptr_a가 가르키는 변수의 값 : %d\n", *ptr_a);
}