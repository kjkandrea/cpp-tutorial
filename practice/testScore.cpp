#include <stdio.h>

int main() {
  int math = 55, korean = 95, english = 73;
  int sum = math + korean + english;
  double average = (double)sum / 3;

  printf("average : %f\n", average);
}

// correct : 74.333333..