#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: point char
 * Return: result of sum
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0;
int cont = 0, next = 0, mult = 1;
if (b == NULL)
return (0);
while (b[cont] != '\0')
{
cont++;
}
for (next = cont - 1; next >= 0; next--)
{
if (b[next] != '1' && b[next] != '0')
{
return (0);
}
if (b[next] == '1')
{
sum += mult;
}
mult *= 2;
}
return (sum);
}
