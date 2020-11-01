#include <stdio.h>

int main() {
  typedef int Pair[2];
  Pair xy = {10, 20}; // int xy[2] = {10, 20}

  printf("x : %d, y : %d\n", xy[0], xy[1]);
}