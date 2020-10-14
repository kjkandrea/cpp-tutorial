#include <stdio.h>

int main() {
  // input
  int fstDepth;
  int sndDepth;

  printf("이차원 배열의 크기를 입력하세요 : ");
  scanf("%d%d", &fstDepth, &sndDepth);

  printf("fstDepth == %d, sndDepth == %d\n", fstDepth, sndDepth);
  int arr[10][10];
  for (int i = 0;i < fstDepth;i++) {
    for (int j = 0;j < sndDepth;j++) {
        printf("arr[%d][%d]의 값을 입력하세요. : ", i, j);
        scanf("%d", &arr[i][j]);
    }
  }

  // output
  for (int i = 0;i < fstDepth;i++) {
    int temp = 0;
    for (int j = 0;j < sndDepth;j++) {
      temp += arr[i][j];
    }
    printf("%d 번째 배열의 합 : %d\n", i, temp);
  }
}