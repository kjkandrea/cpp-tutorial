#include <stdio.h>

int main() {
  int i = 1;

  while (i <= 10) {
    printf("%d", i);
    i++;
  }

  printf("\n");

  int j;

  do {
    printf("0을 입력해주세요.\n");
    scanf("%d", &j);
  } while (j != 0);

  printf("감사합니당\n");
}