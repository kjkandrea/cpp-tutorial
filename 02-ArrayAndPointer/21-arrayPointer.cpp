#include <stdio.h>

int main() {
  int arr[3] = { 1, 2, 3 };

  // 이게 배열 포인터이다. 😎
  int(*ptr_arr)[3]; // 길이 3인 int형 배열을 가르키는 포인터를 선언함
  ptr_arr = &arr;
  // == int(*ptr_arr)[3] = &arr;

  printf("ptr_arr = %p\n", ptr_arr);
  printf("*ptr_arr = %p\n", *ptr_arr);
  printf("(*ptr_arr) = %p\n", (*ptr_arr));

  for (int i = 0;i < 3;i++) {
    printf("%d\n", (*ptr_arr)[i]);
  }
}