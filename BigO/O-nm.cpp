
#include <stdio.h>

int main() {
  int n = 16;
  int m = 8;
  int steps = 0;
  printf("n은 %d, m은 %d ", n, m);

  for (int i = 1;i <= n;i++) {
    for (int j = 1;j <= m;j++) steps++;
  }

  printf("steps은 %d\n", steps);
  printf("따라서 O(nm)의 시간 복잡도를 지닌다.");
}