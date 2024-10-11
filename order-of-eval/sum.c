#include <stdio.h>

int tong(int x, int y) {
  return x + y;
}

int main() {
  int x = 10, y;
  y = tong(x++, x);
  printf("%d", y);
  return 0;
}
