#include <stdio.h>

int main() {
  int a = 10;
  int *ptr_a = &a;

  printf("ptr_a의 값 : %p\n", ptr_a);
  printf("ptr_a + 1 의 값 : %p\n", ptr_a + 1); // + 4byte
  printf("왜냐하면 *ptr_a (int)의 %lu바이트이기 때문에 그만큼 이동했지.\n", sizeof(*ptr_a));


  double b = 10.00;
  double *ptr_b = &b;

  printf("ptr_b의 값 : %p\n", ptr_b);
  printf("ptr_b + 1 의 값 : %p\n", ptr_b + 1); // + 8byte
  printf("왜냐하면 *ptr_b (double)의 크기가 %lu바이트이기 때문에 그만큼 이동했지.\n", sizeof(*ptr_b));
}