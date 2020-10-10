#include <stdio.h>

int main() {
  int choice;
  printf("New Game : 1\n");
  printf("Continue : 2\n");
  printf("Setting : 3\n");
  printf("Credit : 4\n");
  scanf("%d", &choice);

  if ( choice == 1 ) {
    printf("New Game\n");
  } else if ( choice == 2 ) {
    printf("Continue\n");
  } else if ( choice == 3) {
    printf("Setting\n");
  } else if ( choice == 4) {
    printf("Credit\n");
  } else {
    printf("Something Wrong");
  }
}