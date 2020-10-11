#include <stdio.h>

int main() {
  int n;

  printf("약수를 구할 정수를 입력하세요 : ");
  scanf("%d", &n);
  
  for (int i = 1; i <= n/2; i++) {
    if (n % i == 0) printf("%d 는 %d의 약수입니다.\n", i, n);
  }

  printf("%d 는 %d의 약수입니다.\n", n, n);
}