#include <stdio.h>

void early() {
  printf("hello 1\n");
  printf("hello 2\n");
  return;
  printf("hello 3\n");
  printf("hello 4\n");
  printf("hello 5\n");
}

int main() {
  early();
}