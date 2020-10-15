#include <stdio.h>

int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) {
  if (money < cost) {
    printf("Not enough money. : %d$\n", (money - cost) * -1);
    return -1;
  }
  money -= cost;
  itemCnt+= cnt;
  printf("Buy Item. itemCounter : %d, money: %d\n", itemCnt, money);
  return 0;
}

int main() {
  buyItem(20, 1);
  buyItem(55, 3); // discount
  buyItem(40, 2);
}