#include "holberton.h"
/**
 * _memset - recorres s tantas veces este b
 * @s: pointer
 * @b: char
 * @n: n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
