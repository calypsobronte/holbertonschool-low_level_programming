#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - void
 * @min: string
 * @max: string
 * Return: p
*/
int *array_range(int min, int max)
{
int *p;
int i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
p = malloc(size * sizeof(int));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size && min <= max; i++)
{
p[i] = min;
min++;
}
return (p);
}