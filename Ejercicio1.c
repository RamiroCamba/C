#include <stdio.h>
int main() {

  int x = 10;
  int *p;
  p = &x;
  printf("%d", *p);
  *p = 20;
  printf("%d", x);
  return 0;
}