#include <stdio.h>

struct Product {
  int productNo;
  char name[100];
  int cost;
};


int main() {
  Product product = {
    39203,
    "toy car",
    24500
  };

  printf("상품 번호 : %d, addr : %p\n", product.productNo, &product.productNo);
  printf("상품 이름 : %s, addr : %p\n", product.name, &product.name);
  printf("상품 가격 : %d, addr : %p\n", product.cost, &product.cost);

  printf("sizeof(product) : %lu\n", sizeof(product));
}