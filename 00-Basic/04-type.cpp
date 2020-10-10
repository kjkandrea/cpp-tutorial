#include <stdio.h>

int main() {
  // int : 32비트(4바이트) 정수를 담는데에 쓰임. %d로 출력
  int num = 3;
  printf("%d\n", num);

  // float : 32비트(4바이트) 실수를 담는데에 쓰임. %f로 출력
  float a = 9.8;
  float b = 3.14;
  float division = a / b;
  printf("%f\n", division);

  // double : 64비트(8바이트) 실수를 담는데에 쓰임. %f로 출력
  double doubleFloat = 9.8;
  printf("%f\n", doubleFloat);
}