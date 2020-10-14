/*
배열 포인터 삼계명 👩‍⚖️

1. ptr == &ptr[0]
2. *ptr == ptr[0]
3. ptr + 1 == ptr + sizeof(*ptr)을 더한 값
*/
#include <stdio.h>

int main() {
  int arr[3] = { 1, 2, 3 };

  printf("arr  = %p\n", arr);
  printf("arr + 1 = %p\n", arr + 1);

  printf("&arr = %p\n", &arr);
  printf("&arr + 1 = %p\n", &arr + 1);
  printf("sizeof(arr) = %lu\n", sizeof(arr)); // 아하 이래서 12가 더해졌구나! 
}

