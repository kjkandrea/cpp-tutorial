#include <stdio.h>

void walk(int distence);
void rotate(int angle);
void movement();

int main() {
  movement();
}

void walk(int distence) {
  printf("%d미터 만큼 걸었어요. 🚶‍♂️\n", distence);
}

void rotate(int angle) {
  printf("%d도 만큼 돌았어요. 💃\n", angle);
}

void movement() {
  for (int i = 0;i < 3;i++) {
    walk(10);
    rotate(45);
  }
}