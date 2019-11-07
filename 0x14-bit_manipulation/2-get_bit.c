#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int
 * @index: int
 * Return: -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int cont = 0;

if (index > (8 * 8))
{
return (-1);
}
else
{
while (index > cont)
{
n /= 2;
cont++;
}
if (index == cont)
{
return (n % 2);
}
}
return (-1);
}
