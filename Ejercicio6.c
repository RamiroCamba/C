#include <stdio.h>

void invertir(int *inicio, int *fin);

int main() {

  int arr[] = {1, 2, 3, 4, 5};
  int *inicio = &arr[0];
  int *fin = &arr[4];
  int n = 5;
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
  invertir(inicio, fin);
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
  return 0;
}

void invertir(int *inicio, int *fin) {
  int aux;
  while (inicio < fin) {
    aux = *inicio;
    *inicio = *fin;
    *fin = aux;
    inicio++;
    fin--;
  }
}