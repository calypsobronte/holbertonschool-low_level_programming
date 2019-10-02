#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print
 * @a: letter
 * @n: elements
 */
void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
if (b < n - 1)
{
printf("%d, ", a[b]);
}
else
{
printf("%d", a[b]);
}
}
printf("\n");
}
