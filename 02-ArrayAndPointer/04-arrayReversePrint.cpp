#include <stdio.h>

int main() {
  int n;
  int arr[1000];

  printf("입력할 갯수 : ");
  scanf("%d", &n);
  for (int i = 0;i < n;i++) {
    printf("%d 번 값 입력 : ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = n - 1;i >= 0;i--) {
    printf("%d ", arr[n - i - 1]);
  }
}