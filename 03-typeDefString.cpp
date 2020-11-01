#include <stdio.h>

int main() {
  typedef const char *string;
  string name = "Mummu"; // const char *name = "Mummu";

  printf("Hello, %s\n", name);
}