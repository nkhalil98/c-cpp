#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(0));
  int guess = rand() % 10 + 1; 
  int tries = 0;
  int num = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &num);

  while (guess != num && tries < 4) {
    printf("Wrong guess, try again: ");
    scanf("%d", &num);
    tries++;
  }

  if (guess == num) {
    printf("Correct!\n");
  }
}