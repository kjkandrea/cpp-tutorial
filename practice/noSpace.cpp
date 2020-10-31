#include <stdio.h>

void print_noSpace(const char str[]) {
  for (int i = 0; str[i] != '\0'; i++ ) {
    char space = ' ';
    if (str[i] != space) printf("%c", str[i]);
  }
  
}

int main() {
  print_noSpace("Ba nan a");
}