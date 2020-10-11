#include <stdio.h>

int main() {
  int defaultValue = 10;

  printf("초기 값 : %d\n", defaultValue);

  defaultValue += 10;
  printf("x += 10 : %d\n", defaultValue);

  defaultValue -= 15;
  printf("x -= 15 : %d\n", defaultValue);
  
  defaultValue *= 3;
  printf("x *= 3 : %d\n", defaultValue);

  defaultValue /= 5;
  printf("x /= 5 : %d\n", defaultValue);

  defaultValue %= 2;
  printf("x /= 2 = remain : %d\n", defaultValue);
}