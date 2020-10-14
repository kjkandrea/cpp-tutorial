#include <stdio.h>

int main() {
  // input
  int count;
  printf("입력할 숫자의 갯수 : ");
  scanf("%d", &count);

  int arr[100];
  for (int i = 0;i < count;i++) {
    scanf("%d", &arr[i]);
  }

  printf("입력 종료\n");
  
  // output
  int even[100];
  int eventHowMany = 0;
  for (int i = 0; i < count; i++) { // odd
    if (arr[i] % 2) {
      printf("%d ", arr[i]);
    } else {
      even[eventHowMany] = arr[i];
      eventHowMany++;
    }
  }
  printf("\n");

  for (int i = 0; i < eventHowMany; i++) { // even
    printf("%d ", even[i]);
  }
  printf("\n");
}