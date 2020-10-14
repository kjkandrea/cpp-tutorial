#include <stdio.h>

int main() {
  char str[] = "Hello";

  printf("%s\n", &str[0]); // str == &str[0]

  char strings[3][10] = { "Hello", "World", "Pointer" };

  for (int i = 0; i < 3;i++) {
    printf("%s\n", &strings[i][0]); // strings[i] == &strings[i][0]
  }

  char *p_str[3];

  for (int i = 0; i < 3;i++) {
    p_str[i] = strings[i];
  }

  for (int i = 0; i < 3;i++) {
    printf("%s\n", p_str[i]);
  }
}