/**
 * Black Jack
 * 
 * @author  무라야마 유키오
 * @version 1.6
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* 블랙잭 카드의 장 수 */
#define CMAX 52
/* 키보드로 입력할 수 있는 버퍼의 크기 */
#define BUFF_SIZE 256

/* 가져온 카드를 저장할 구조체 */
struct input {
  int card[CMAX]; // 가져온 카드
  int num; // 카드의 수
};

int comp(void); // 컴퓨터가 카드를 가져간다
int getcard(struct input *inp_card); // 플레이어가 카드를 가져간다
void print_card(const struct input *inp_card, const char *card[]); // 가져간 카드를 표시
int calc(const struct input *inp_card); // 득점 계산

/* 난수의 초기화 */
#define randmize() srand(time(NULL))

/**
 * @brief 메인루프, 승패 판정
 * 
 * @return int 정상 종료 시에는 0을 반환한다.
 */
int main()
{
  const static char *card[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}; // 카드 종류

  int x; // 가져간 카드
  int c_score; // 컴퓨터의 점수
  int h_score; // 플레이어의 점수
  char in[BUFF_SIZE]; // 입력한 문자열
  struct input h_card = {{0}, 0}; // 플레이어가 가져간 카드

  printf("Black Jack Game \n");
  randmize();
  c_score = comp();

  x = getcard(&h_card);
  printf("'%s'을 가져갔습니다. \n", card[x]);
  printf("한 장 더 가져가시겠습니까?(y/n): ");

  while (h_card.num < CMAX && fgets(in, BUFF_SIZE, stdin) != NULL) {
    if (strncmp(in, "y", 1) == 0) {
      x = getcard(&h_card);
      printf("'%s'을 가져갔습니다.", card[x]);
      print_card(&h_card, card);
      printf("한 장 더 가져가겠습니까?(y/n): ");
    } else if (strncmp(in, "n", 1) == 0)
      break;
    else
      printf("y또는 n을 입력하세요. \n");
  }

  h_score = calc(&h_card);
  printf("당신은 %d점 입니다. 컴퓨터는 %d 점 입니다. \n", h_score, c_score);

  if (c_score <= 21 && (h_score > 21 || c_score > h_score))
    printf("컴퓨터가 이겼습니다! \n");
  else if (h_score <= 21 && (c_score > 21 || h_score > c_score))
    printf("당신이 이겼습니다! \n");
  else
    printf("무승부 \n");

  return 0;
}

/**
 * @brief  컴퓨터가 카드를 가져간다.
 * 
 * @return int 가져간 카드
 */
int comp(void)
{
  return rand() % 8 + 16; // xxx
}

/**
 * int getcard(struct input *h_card)
 * 플레이어가 가져간 카드를 inp 구조체에 저장한다.
 * 
 * @param  struct input *h_card : 가져간 카드의 데이터
 * @return int : 가져간 카드
 */

int getcard(struct input *h_card)
{
  int x; // 가져간 카드
  
  x = rand() % 13 + 1;
  h_card->card[h_card->num] = x;
  ++(h_card->num);

  return x;
}

/**
 * @brief 가져간 카드를 표시한다.
 * 
 * @param inp_card 가져간 카드의 데이터
 * @param card 카드의 종류
 */
void print_card(const struct input *inp_card, const char *card[])
{
  int i;

  printf("지금까지 가져간 카드는 ");
  for (i = 0; i < inp_card->num; ++i)
    printf("%s ", card[inp_card->card[i]]);
  printf("입니다. \n");
}

/**
 * @brief 
 * 가져간 카드의 득점을 계산한다.
 *  A는 1점 또는 11점
 *  2~10은 각각의 숫자가 점수이다
 *  J, Q, K는 10점
 * 
 * @param  inp_card 가져간 카드의 데이터
 * @return int 계산된 득점
 */
int calc(const struct input *inp_card)
{
  const static int ncard[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
  int i;
  int n1 = 0; // A카드의 장 수 
  int score = 0; // 합계 점수

  for (i = 0; i < inp_card->num; ++i) {
    score += ncard[inp_card->card[i]];
    if (inp_card->card[i] == 1) // 카드가 A 인 경우
      ++n1;
  }

  while (n1-- > 0) // 카드가 A인 경우의 득점 처이
    if (score <= (21 - 10))
      score += 10;
  
  return score;
}