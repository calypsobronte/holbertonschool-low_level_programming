#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: point
 * @index: int
 * Return: -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mult = 1, cont = 0;
if (n == NULL)
{
return (-1);
}
if (index > 64)
{
return (-1);
}
else
{
while (cont <= index)
{
if (cont > 0)
{
mult *= 2;
}
cont++;
}
}
return (-1);
}
