#include <stdio.h>

int main() {
  int n;
  printf("판별할 정수를 입력하세요. : ");
  scanf("%d", &n);

  if ( n % 2 ) {
    printf("n은 홀수 입니다.\n");
  } else {
    printf("n은 짝수 입니다.\n");
  }
}