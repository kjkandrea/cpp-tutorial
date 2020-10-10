#include <stdio.h>

int main() {
  int n;
  int loop = 0;

  printf("양수를 입력해주세요. : ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("양수를 입력해주세요.\n");
  } else {
    for (int i = 1; i <= n; i*=2) {
      printf("%d\n", i);
      loop++;
    }

    printf("%d번 반복되었습니다.", loop);
  }
}