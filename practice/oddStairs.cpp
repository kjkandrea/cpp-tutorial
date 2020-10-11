#include <stdio.h>

int main() {
  int n;

  printf("몇 층 짜리 홀수 계단을 만들까요? : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) { // n번 반복
    for (int j = 1;j < i; j++) {
      printf("%d ", 2 * j - 1);
    }
    printf("\n");
  }
}