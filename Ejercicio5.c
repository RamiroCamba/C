#include <stdio.h>

void copiar_cadena(char *destino, char *origen);

int main() {
  char origen[] = "Hola que tal";
  char destino[50] = "";
  copiar_cadena(destino, origen);
  printf("%s", destino);

  return 0;
}

void copiar_cadena(char *destino, char *origen) {
  while (*origen != '\0') {
    *destino = *origen;
    destino++;
    origen++;
  }
  destino = '\0';
}