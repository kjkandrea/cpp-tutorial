#include <stdio.h>

int main() {
  int n;
  
  printf("2^n 출력하기. n의 값은? : ");
  scanf("%d", &n);

  for (int i = 0, value = 1;i <= n;i++) {
      printf("2^%d = %d\n", i, value);
      value *= 2;
  }

}