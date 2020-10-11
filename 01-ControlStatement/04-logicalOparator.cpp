#include <stdio.h>

int main() {
  int x;
  printf("비교할 값을 입력하세요. (x) : ");
  scanf("%d", &x);

  bool range = x >= 1 && x <= 10;
  printf("x는 1보다 크거나 같고, 10보다 작거나 같다. : %d\n", range);

  bool threeOrSeven = x == 3 || x == 7;
  printf("x는 3 혹은 7이다. : %d\n", threeOrSeven);

  bool notThreeOrSeven = !threeOrSeven;
  printf("x는 3 혹은 7이 아니다. : %d\n", notThreeOrSeven);
}