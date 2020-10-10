#include <stdio.h>

int main() {
  char alphabet;

  printf("알파벳을 입력하세요. : ");
  scanf("%c", &alphabet);
  printf("다음 알파벳은? %c\n", alphabet + 1);
}