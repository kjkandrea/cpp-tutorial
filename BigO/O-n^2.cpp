
#include <stdio.h>

int main() {
  int n = 16;
  int steps = 0;
  printf("n은 %d ", n);

  for (int i = 1;i <= n;i++) {
    for (int j = 1;j <= n;j++) steps++;
  }

  printf("steps은 %d\n", steps);
  printf("따라서 O(n^2)의 시간 복잡도를 지닌다.");
}