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

---
**Nota:** Para compilar tus ejercicios puedes usar:
```bash
gcc ejercicio1.c -o ejercicio1
./ejercicio1
```
