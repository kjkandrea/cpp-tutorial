/*
배열 포인터 삼계명 + 👩‍⚖️

1. ptr == &ptr[0]
2. *ptr == ptr[0]
3. ptr + 1 == ptr + sizeof(*ptr)을 더한 값
4. arr == &arr[0]
5. *arr == arr[0]
6. arr + 1 == arr + sizeof(*arr)을 더한 값

이 명제는 2차원 배열에서도 동일하다.
왜냐하면 부모 자식 사이이니깐! 👨‍🦳 👱‍♂️ 👶
*/
#include <stdio.h>

int main() {
  int arr[2][3] = {
    { 1, 2, 3 },
    { 4, 5, 6 }
  };

  printf("sizeof(arr) == %lu\n", sizeof(arr)); // 24
  printf("sizeof(arr[0]) == %lu\n", sizeof(arr[0])); // 12
  printf("sizeof(arr[0][0]) == %lu\n", sizeof(arr[0][0])); // 4

  printf("arr == %p\n", arr); // = x
  printf("&arr == %p\n", &arr); // == x
  printf("&arr[0] == %p\n", &arr[0]); // == x
  printf("&arr[0][0] == %p\n", &arr[0][0]); // == x

  for(int(*row)[3] = arr;row < arr + 2;row++) {
    for(int*col = *row; col < *row + 3;col++) {
      printf("%d ", *col);
    }
    printf("\n");
  }
}