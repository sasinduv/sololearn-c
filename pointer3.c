#include <stdio.h>

void change(int *x, int y) {
  *x = y;
  y = *x;
}
int main() {
  int a = 8;
  int b = 3;
  change(&b, a);
  printf("%d", b);

  return 0;
}