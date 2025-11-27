#include <stdio.h>
void intercambiar(int *a, int *b);

int main() {
  int num1 = 5;
  int num2 = 10;
  printf("%d\n", num1);
  printf("%d\n", num2);
  intercambiar(&num1, &num2);
  printf("%d\n", num1);
  printf("%d\n", num2);
  return 0;
}

void intercambiar(int *a, int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}