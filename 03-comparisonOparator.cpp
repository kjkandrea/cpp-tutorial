#include <stdio.h>

int main() {
  int x, y;
  printf("비교할 값을 입력하세요. (x) : ");
  scanf("%d", &x);
  printf("비교할 값을 입력하세요. (y) : ");
  scanf("%d", &y);

  printf("x : %d, y : %d\n", x, y);
  
  bool more = x > y;
  bool less = x < y;
  bool equal = x == y;
  bool moreOrEqual = x >= y;
  bool lessOrEqual = x <= y;
  printf("more : %d, less: %d, equal: %d\nmore or equal: %d, less or equal : %d", more, less, equal, moreOrEqual, lessOrEqual);

}