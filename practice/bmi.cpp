#include <stdio.h>

int main() {
  float kg, m;

  printf("몸무게(kg)를 입력하세요. : ");
  scanf("%f", &kg);
  printf("키(m)를 입력하세요. : ");
  scanf("%f", &m);
  printf("BMI : %f\n", kg / (m * m));
}