#include <stdio.h>

int main(void) {

  unsigned int a = 12; // 0000 0000 0000 1100
  unsigned int b = 24; // 0000 0000 0001 1000
  int c = 0; // 0000 0000 0000 0000

  printf("sizeof(a): %d\n", sizeof(c));

  c = a & b;
  //   0000 0000 0000 1100 (12)
  // & 0000 0000 0001 1000 (24)
  // =====================
  //   0000 0000 0000 1000 (8)
  printf("%d & %d = %d\n", a, b, c);

  c = a | b;
  //   0000 0000 0000 1100 (12)
  // | 0000 0000 0001 1000 (24)
  // =====================
  //   0000 0000 0001 1100 (28)
  printf("%d | %d = %d\n", a, b, c);

  c = a ^ b;
  //   0000 0000 0000 1100 (12)
  // ^ 0000 0000 0001 1000 (24)
  // =====================
  //   0000 0000 0001 0100 (20)
  printf("%d ^ %d = %d\n", a, b, c);

  c = ~a;
  //  ~0000 0000 0000 1100 (12)
  // =====================
  //   1111 1111 1111 0011 (-13)
  printf("~%d = %d\n", a, c);

  c = a << 2;
  //    0000 0000 0000 1100 (12)
  // << 0000 0000 0001 1000 (24)
  // ======================
  //    
  return 0;
}