#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - imprimir la suma de dos diagonales de una matriz cuadrada
 * @a: pointer
 * @size: tama;o
 */
void print_diagsums(int *a, int size)
{
int b, c, d = 0, e = 0;
for (b = 0; b < size; b++)
d += a[(size + 1) * b];
for (c = 0; c < size; c++)
e += a[(size - 1) * (c + 1)];
printf("%d, %d\n", d, e);
}
