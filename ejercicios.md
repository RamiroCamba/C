# Ejercicios de Práctica en C: Punteros

Aquí tienes una serie de ejercicios para practicar el uso de punteros, ordenados por dificultad.

## Ejercicio 1: Lo Básico
**Objetivo:** Entender la declaración, asignación y desreferenciación.
1. Crea un archivo `ejercicio1.c`.
2. Declara una variable entera `x` con valor 10.
3. Declara un puntero a entero `p`.
4. Asigna la dirección de `x` a `p`.
5. Imprime la dirección de memoria almacenada en `p`.
6. Modifica el valor de `x` a 20 **usando solamente el puntero `p`**.
7. Imprime el nuevo valor de `x` para verificar.

## Ejercicio 2: Función Swap
**Objetivo:** Pasar argumentos por referencia.
1. Crea un archivo `ejercicio2.c`.
2. Escribe una función `void intercambiar(int *a, int *b)` que intercambie los valores de dos enteros.
3. En el `main`, declara `int num1 = 5` y `int num2 = 10`.
4. Llama a `intercambiar` pasándole las direcciones de `num1` y `num2`.
5. Imprime los valores antes y después de la llamada para verificar que cambiaron.

## Ejercicio 3: Arrays y Aritmética de Punteros
**Objetivo:** Recorrer arrays sin usar corchetes `[]`.
1. Crea un archivo `ejercicio3.c`.
2. Declara un array de enteros `numeros[5] = {10, 20, 30, 40, 50}`.
3. Usa un puntero `int *ptr` inicializado al inicio del array.
4. Recorre el array usando un bucle `for` o `while`, pero **accede a los elementos usando aritmética de punteros** (ej. `*(ptr + i)` o incrementando `ptr`), no uses `numeros[i]`.

## Ejercicio 4: Cadenas (Strings)
**Objetivo:** Manipular caracteres con punteros.
1. Crea un archivo `ejercicio4.c`.
2. Escribe una función `int longitud_cadena(char *str)` que calcule la longitud de una cadena (sin usar `strlen` de `string.h`).
3. La función debe recorrer la cadena usando un puntero hasta encontrar el carácter nulo `\0`.
4. Prueba la función en el `main` con varias palabras.

## Ejercicio 5: Copiar Cadenas (strcpy manual)
**Objetivo:** Copiar datos de una dirección a otra.
1. Crea un archivo `ejercicio5.c`.
2. Escribe una función `void copiar_cadena(char *destino, char *origen)`.
3. La función debe copiar carácter por carácter desde `origen` hacia `destino` hasta encontrar el `\0`.
4. **Importante:** No olvides copiar también el `\0` al final en el destino.
5. En el `main`, declara `char origen[] = "Hola Mundo";` y `char destino[50];` (vacío pero con espacio suficiente).
6. Llama a tu función e imprime `destino` para ver si se copió bien.

## Ejercicio 6: Contar Vocales
**Objetivo:** Lógica condicional con punteros.
1. Crea un archivo `ejercicio6.c`.
2. Escribe una función `int contar_vocales(char *str)`.
3. Recorre la cadena con un puntero.
4. Si `*str` es 'a', 'e', 'i', 'o', 'u' (o mayúsculas), suma 1 a un contador.
5. Retorna el total.

## Ejercicio 7: Invertir Array (Dos Punteros)
**Objetivo:** Usar dos punteros simultáneamente.
1. Crea un archivo `ejercicio7.c`.
2. Declara un array `int arr[] = {1, 2, 3, 4, 5};` y calcula su tamaño.
3. Usa dos punteros: `*inicio` (apunta al primer elemento) y `*fin` (apunta al último).
4. En un bucle `while (inicio < fin)`:
   - Intercambia los valores de `*inicio` y `*fin` (puedes reusar la lógica del Ejercicio 2).
   - Mueve `inicio` hacia adelante (`inicio++`).
   - Mueve `fin` hacia atrás (`fin--`).
5. Imprime el array resultante. Debería ser `{5, 4, 3, 2, 1}`.

## Ejercicio 8: Desafío Final - Palíndromos
**Objetivo:** Combinar todo lo aprendido (Strings, Aritmética de Punteros, Lógica).
1. Crea un archivo `ejercicio8.c`.
2. Escribe una función `int es_palindromo(char *str)` que devuelva `1` si la cadena es un palíndromo (se lee igual al derecho y al revés) y `0` si no lo es.
3. **Ejemplos:** "neuquen", "radar", "reconocer".
4. **Estrategia:**
   - Usa dos punteros: uno al inicio y otro al final de la cadena (tendrás que buscar el final primero, puedes reusar tu lógica de `longitud_cadena` o un `while`).
   - Mientras `inicio < fin`:
     - Compara los caracteres apuntados.
     - Si son distintos, **no** es palíndromo (retorna 0 inmediatamente).
     - Si son iguales, avanza `inicio` y retrocede `fin`.
   - Si el bucle termina sin problemas, **sí** es palíndromo (retorna 1).

---
**Nota:** Para compilar tus ejercicios puedes usar:
```bash
gcc ejercicioX.c -o ejercicioX
./ejercicioX
```
