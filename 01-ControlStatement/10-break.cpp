#include <stdio.h>

int main() {
  for (int i = 1; ;i++) {
    int zero;

    printf("0을 입력해주세용. %d 번째 : ", i);
    scanf("%d", &zero);

    if (zero == 0) {
      printf("감사합니다! 🙇‍♀️");
      break;
    }
  }
}