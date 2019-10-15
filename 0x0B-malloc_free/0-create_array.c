#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - pasar el tama;o dependiendo de la cadena
 * @size: intero
 * @c: cadena
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int a = 0;
if (size == 0)
{
return (NULL);
}
if (size != 0)
{
p = malloc(sizeof(c) * size);
}
else
{
return (NULL);
}
while (a < size)
{
p[a] = c;
a++;
}
return (p);
}
