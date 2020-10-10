#include <stdio.h>

int main() {
  int a = 100;
  int division1 = a/3;
  double division2 = a/3;
  double division3 = (double)a/3;

  printf("%d %d %f %f\n", a, division1, division2, division3);
}