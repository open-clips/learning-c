#include <stdio.h>

int main(void) {
  int x = 4;
  int y = 4;
  if (x < y) {
    printf("%d is less than %d", x, y);
  } else if (x > y) {
    printf("%d is greater than %d", x, y);
  } else {
    printf("%d is equal to %d", x, y);
  }
  return 0;
}
