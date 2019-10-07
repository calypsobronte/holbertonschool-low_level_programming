#include "holberton.h"
/**
 * _strspn - comparacion entre cada posicion
 * @s: point
 * @accept: point
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, c = 0;
for (a = 0; s[a] != 32; a++)
for (b = 0; accept[b] != 0; b++)
if (s[a] == accept[b])
c++;
return (c);
}
