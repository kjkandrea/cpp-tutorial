#include <stdio.h>

int main() {
  typedef int superPowerAwesomeInt32;
  superPowerAwesomeInt32 age = 29;

  printf("%d\n", age);
  printf("%lu\n", sizeof(superPowerAwesomeInt32));
}