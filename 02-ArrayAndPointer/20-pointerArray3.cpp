#include <stdio.h>

int main() {
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int *ptr = arr;

  for (int i = 0;i < 10;i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");

  for (int i = 0;i < 10;i++) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");

  // arr[i] == *(arr + i) == *(ptr + i) == *(1 + ptr) == i[ptr] 🙀
  // c언어가 처리를 할때 a[i] 를 *(a + i)로 변경하기 때문에 밑의 예제와 같은 코드가 성립한다. 🙀
  // 허나 비 직관적이니 쓰지말자.
  for (int i = 0;i < 10;i++) {
    printf("%d ", i[ptr]); 
  }
  printf("\n");
}