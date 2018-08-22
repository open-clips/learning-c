#include <limits.h>
#include <stdio.h>

void bit_pattern(int u) {
  int i, x, word;
  unsigned mask = 1;
  word = CHAR_BIT * sizeof(int);
  mask = mask << (word - 1);
  for (i = 1; i <= word; i++) {
    if (i % 4 == 1) {
      printf(" ");
    }
    x = (u & mask) ? 1 : 0;
    printf("%d", x);
    mask >>= 1;
  }
}

int main(int argc, char* argv[]) {
  bit_pattern(strtol(argv[1], NULL, 10));
}