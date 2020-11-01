  #include <stdio.h>

struct Position { int x, y; }; // typedef struct { int x, y; } Position;
// 구조체는 주로 전역변수로 사용 함.

int main() {
  Position position; // struct { int x, y; } position

  position.x = 10;
  position.y = 20;

  printf("x : %d, y : %d\n", position.x, position.y);
  printf("sizeof(position) == %lu\n", sizeof(position));
}