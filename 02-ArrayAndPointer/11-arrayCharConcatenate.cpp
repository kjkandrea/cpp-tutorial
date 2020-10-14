#include <stdio.h>
#include <string.h>

int main() {
  char str[100] = "Hello,";
  
  strcat(str, "world!");

  printf("%s\n", str);

  char str2[] = "I can do c++";

  strcat(str, str2);

  printf("%s\n", str);
}