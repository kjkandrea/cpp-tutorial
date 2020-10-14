#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "banana";
  char str2[] = "apple";
  int cmp1 = strcmp(str1, str2); // 1
  int cmp2 = strcmp("apple", "banana"); // -1
  int cmp3 = strcmp("banana", str1); // 0

  printf("%d %d %d\n", cmp1, cmp2, cmp3);
}