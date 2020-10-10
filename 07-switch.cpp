#include <stdio.h>

int main() {
  int choice;

  makeChoise:

  printf("New Game : 1\n");
  printf("Continue : 2\n");
  printf("Setting : 3\n");
  printf("Credit : 4\n");
  scanf("%d", &choice);

  switch ( choice ) {
    case 1 :
      printf("New Game\n");
      break;
    case 2 :
      printf("Continue\n");
      break;
    case 3 :
      printf("Setting\n");
      break;
    case 4 :
      printf("Credit\n");
      break;
    default :
      printf("Something Wrong. Please re-enter\n");
      goto makeChoise;
  }
}