#include <stdio.h>

int es_palindromo(char *str);

int main() {
  char palabra[] = "oso";

  if (es_palindromo(palabra) == 1) {
    printf("'%s' ES palindromo.\n", palabra);
  } else {
    printf("'%s' NO es palindromo.\n", palabra);
  }
  return 0;
}

int es_palindromo(char *str) {
  char *inicio = str;
  char *fin = str;
  *fin = *fin - 1;
  // PASO 1: Llevar el puntero 'fin' hasta el ultimo caracter real
  // (Pista: Avanzar mientras no sea '\0', y al final retroceder uno)

  // ... tu codigo para mover fin ...

  // PASO 2: Comparar extremos e ir cerrando
  while (inicio < fin) {
    // Si las letras son distintas, NO es palindromo (return 0)

    // Si son iguales, seguir cerrando (inicio++, fin--)
  }

  return 1; // Si llego hasta aca, ES palindromo
}