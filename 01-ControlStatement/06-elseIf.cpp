#include <stdio.h>

int main() {
  int n;
  printf("판별할 정수를 입력하세요. : ");
  scanf("%d", &n);

  if ( n > 0 ) {
    printf("n은 양수 입니다.\n");
  } else if ( n == 0 ) {
    printf("n은 0 입니다.\n");
  } else {
    printf("n은 음수 입니다.\n");
  }
}