#include <stdio.h>

int longitud_cadena(char *str);

int main() {
  char palabra[] = "Hola";
  int len = longitud_cadena(palabra);
  printf("La longitud de '%s' es: %d\n", palabra, len);

  char frase[] = "Programacion en C";
  printf("La longitud de '%s' es: %d\n", frase, longitud_cadena(frase));

  return 0;
}

int longitud_cadena(char *str) {
  int contador = 0;
  // Mientras el valor apuntado NO sea el caracter nulo '\0'
  while (*str != '\0') {
    contador++; // Contamos un caracter mas
    str++;      // Movemos el puntero a la siguiente posicion
  }
  return contador;
}