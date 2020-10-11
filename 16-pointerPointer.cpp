#include <stdio.h>

int main() {
  int a = 10;
  int *ptr;
  ptr = &a;

  int **ptr_ptr;
  ptr_ptr = &ptr;

  printf("a의 값 : %d\n", a);
  printf("a의 주소값 : %p\n", &a);

  printf("ptr의 값 : %p\n", ptr);
  printf("ptr의 주소값 : %p\n", &ptr);

  printf("ptr_ptr의 값 : %p\n", ptr_ptr);
  printf("*ptr_ptr : %p\n", *ptr_ptr);
  printf("**ptr_ptr : %d\n", **ptr_ptr);
  // printf("ptr_ptr의 주소값 : %p\n", &ptr_ptr);
}