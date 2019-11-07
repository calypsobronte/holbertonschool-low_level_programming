#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: point
 * @index: int
 * Return: -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int *point;
unsigned int mult = 1, cont = 0;
point = malloc(sizeof(unsigned long int) * 8 - 1);
if (point == NULL)
{
return (-1);
}
else
{
while (cont != index)
{
mult *= 2;
cont++;
}
if (cont == index)
{
*n += mult;
return (1);
}
}
return (-1);
}