#include <stdio.h>

int main() {
  int n;
  printf("몇 층 짜리 홀수 계단을 만들까요? : ");
  scanf("%d", &n);

  for (int i = 1;i <= n;i++) {
    for (int j = 1;j <= i * 2 - 1;j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}