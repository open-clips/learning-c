#include <stdio.h>

int main(void) {

  int j = 2;

  printf("%d\n", j);

  char* petName;
  int petAge;

  printf("What is your pet's name? ");
  scanf("%s", &petName);
  printf("What is your pet's age? ");
  scanf("%d", &petAge);
  printf("Your %s is %d.\n", &petName, petAge);

  return 0;
}