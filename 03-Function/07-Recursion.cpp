#include <stdio.h>

int count = 0;
void rec(int n) {
  count++;
  printf("rec run count : %d ", count);
  if(n > 200) return;
  printf("%d회 반복되었습니다.\n", n);
  rec(n + 1);
}

int main() {
  rec(1);
}