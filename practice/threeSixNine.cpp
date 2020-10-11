#include <stdio.h>

int main() {
  int n = 999;

  for (int i = 1;i <= n;i++) {
    int j = i % 10;
    int k = i / 10;
    int l = k % 10;
    int n = k / 10;
    int o = n % 10;
      
    if (j == 3 || j == 6 || j == 9 || k == 3 || k == 6 || k == 9 || l == 3 || l == 6 || l == 9 || n == 3 || n == 6 || n == 9 || o == 3 || o == 6 || o == 9 ) {
      printf("👏 ");
    } else {
      printf("%d ", i);
    }

    // 그냥 정규식으로 3, 6, 9를 찾자..
  }
}