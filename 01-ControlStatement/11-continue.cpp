#include <stdio.h>

int main() {
  int n = 30;

  for (int i = 1;i <= n;i++) {
    if ( i % 2 ) continue;
    printf("%d\n", i);
  }
}