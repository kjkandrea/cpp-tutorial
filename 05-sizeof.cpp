#include <stdio.h>

// sizeof(x) : x의 크기.
// x : 형 (int, float...)

int main() {
  printf(
    "%d %d %d %d %d %d %d\n",
    sizeof(char),
    sizeof(short),
    sizeof(long),
    sizeof(int),
    sizeof(float),
    sizeof(double)
  );
}