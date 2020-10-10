#include <stdio.h>

int main() {
  int n;
  printf("얼마나 큰 정사각형을 그릴까요? : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j= 1; j <= n; j++ ) {
      printf("🤖");
    }
    printf("\n");
  }

  printf("다 그렸어요! 😻\n");
}