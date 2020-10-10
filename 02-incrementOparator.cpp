#include <stdio.h>

int main() {
  int defaultValue = 1;

  printf("초기 값 : %d\n", defaultValue);

  defaultValue++;
  printf("x++ = %d\n", defaultValue);

  defaultValue--;
  printf("x-- = %d\n", defaultValue);

  printf("전치 연산자 \n");

  int allocationValue = ++defaultValue;

  printf("defaultValue : %d, allocationValue : %d\n", defaultValue, allocationValue);

  printf("후치 연산자 \n");

  allocationValue = defaultValue++;

  printf("defaultValue : %d, allocationValue : %d\n", defaultValue, allocationValue);
}