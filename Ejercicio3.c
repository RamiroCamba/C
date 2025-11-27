#include <stdio.h>

int main() {
  int numeros[5] = {10, 20, 30, 40, 50};
  int *ptr = numeros;
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d\n", *(ptr + i));
  }
  return 0;
}